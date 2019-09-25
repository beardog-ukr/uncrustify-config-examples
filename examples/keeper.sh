#!/usr/bin/env bash
#
# This script was created based on "bash-simple-plus" from:
# Bash Boilerplate: https://github.com/alphabetum/bash-boilerplate
# Copyright (c) 2015 William Melody • hi@williammelody.com

set -o nounset
set -o errexit
trap 'echo "Aborting due to errexit on line $LINENO. Exit code: $?" >&2' ERR
set -o errtrace
set -o pipefail
IFS=$'\n\t'

###############################################################################
# Environment
###############################################################################

# $_ME
# Set to the program's basename.
_ME=$(basename "${0}")

# Indicates there was an expected error in one of called functions.
_FUNC_ERROR_MSG=""

_CMD_TAG_COMPILE="compile"
_CMD_TAG_DIFF="diff"
_CMD_TAG_UNCRUSTIFY="uncrustify"
_CMD_TAG_UNCRUSTIFY_DEF="uncrustify-def"

###############################################################################
# Debug
###############################################################################

# _debug()
#
# Usage:
#   _debug printf "Debug info. Variable: %s\n" "$0"
#
# A simple function for executing a specified command if the `$_USE_DEBUG`
# variable has been set. The command is expected to print a message and
# should typically be either `echo`, `printf`, or `cat`.
__DEBUG_COUNTER=0
_debug() {
  if [[ "${_USE_DEBUG:-"0"}" -eq 1 ]]
  then
    __DEBUG_COUNTER=$((__DEBUG_COUNTER+1))
    # Prefix debug message with "bug (U+1F41B)"
    printf "🐛  %s " "${__DEBUG_COUNTER}"
    "${@}"
    # printf "――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――\\n"
  fi
}
# debug()
#
# Usage:
#   debug "Debug info. Variable: $0"
#
# Print the specified message if the `$_USE_DEBUG` variable has been set.
#
# This is a shortcut for the _debug() function that simply echos the message.
debug() {
  _debug echo "${@}"
}

###############################################################################
# Die
###############################################################################

# _die()
#
# Usage:
#   _die printf "Error message. Variable: %s\n" "$0"
#
# A simple function for exiting with an error after executing the specified
# command. The command is expected to print a message and should typically
# be either `echo`, `printf`, or `cat`.
_die() {
  # Prefix die message with "cross mark (U+274C)", often displayed as a red x.
  printf "❌  "
  "${@}" 1>&2
  exit 1
}
# die()
#
# Usage:
#   die "Error message. Variable: $0"
#
# Exit with an error and print the specified message.
#
# This is a shortcut for the _die() function that simply echos the message.
die() {
  _die echo "${@}"
}

###############################################################################
# Help
###############################################################################

# _print_help()
#
# Usage:
#   _print_help
#
# Print the program help information.
_print_help() {
  cat <<HEREDOC
This script helps to perform various tasks required for managing the "Uncrustify formatting examples"

Usage:
  ${_ME} [--options] <command_name> [<example_name>] [<example_subname>]
  ${_ME} -h | --help

Options:
  -h --help    Display this help information.
  -v --vesion  (will be implemented later)

Commands:
  ${_CMD_TAG_COMPILE}        Tries to compile example. Use it to ensure example files are correct.
  clean_compiled Removes files left from previous compilation attempts (not implemented)
  ${_CMD_TAG_DIFF}           Shows difference between example file and uncrustified one.
                 Use --diff-tool option to set diff tool
  ${_CMD_TAG_UNCRUSTIFY}     Calls uncrustify to process the example
  ${_CMD_TAG_UNCRUSTIFY_DEF} Calls uncrustify to process the example with default configuration.

Examples:
  ${_ME} compile sp_cpp_lambda_assign add_01
     Tries to compile file add_01.cpp from folder "sp_cpp_lambda_assign"
HEREDOC
}

# Parse Options ###############################################################

# Initialize program option variables.
_PRINT_HELP=0
_USE_DEBUG=0

# Initialize additional expected option variables.
_OPTION_X=0
_SHORT_OPTION_WITH_PARAMETER=""
_LONG_OPTION_WITH_PARAMETER=""

_EXAMPLES_FOLDER=${PWD}
_UNCRUSTIFY_CMD="uncrustify"
_DIFF_TOOL="meld"

# _require_argument()
#
# Usage:
#   _require_argument <option> <argument>
#
# If <argument> is blank or another option, print an error message and  exit
# with status 1.
_require_argument() {
  # Set local variables from arguments.
  #
  # NOTE: 'local' is a non-POSIX bash feature and keeps the variable local to
  # the block of code, as defined by curly braces. It's easiest to just think
  # of them as local to a function.
  local _option="${1:-}"
  local _argument="${2:-}"

  if [[ -z "${_argument}" ]] || [[ "${_argument}" =~ ^- ]]
  then
    _die printf "Option requires an argument: %s\\n" "${_option}"
  fi
}

_COMMAND=""
_EXAMPLE_NAME=""
_EXAMPLE_SUBNAME=""

while [[ ${#} -gt 0 ]]
do
  __option="${1:-}"
  __maybe_param="${2:-}"
  case "${__option}" in
    -h|--help)
      _PRINT_HELP=1
      ;;
    --debug)
      _USE_DEBUG=1
      ;;
    -x|--option-x)
      _OPTION_X=1
      ;;
    -o)
      _require_argument "${__option}" "${__maybe_param}"
      _SHORT_OPTION_WITH_PARAMETER="${__maybe_param}"
       shift
      ;;
    --diff-tool)
      _require_argument "${__option}" "${__maybe_param}"
      _DIFF_TOOL="${__maybe_param}"
      shift
      ;;
    --endopts)
      # Terminate option parsing.
      break
      ;;
    -*)
      _die printf "Unexpected option: %s\\n" "${__option}"
      ;;
    *)
      # The first non-option argument is assumed to be the command name (as $_COMMAND).
      # Subsequent argument is example name (as _example_name).
      if [[ -n "${_COMMAND}" ]]
      then
        if [[ -n "${_EXAMPLE_NAME}" ]]
        then
          _EXAMPLE_SUBNAME="${__option}"
        else
          _EXAMPLE_NAME="${__option}"
        fi
      else
        _COMMAND="${__option}"
      fi
      ;;
  esac
  shift
done

###############################################################################
# Program Functions (command processors)
###############################################################################

_compile() {
  local _cpp_ffn="${_EXAMPLES_FOLDER}/${_EXAMPLE_NAME}/${_EXAMPLE_SUBNAME}.cpp"

  if [ ! -f "${_cpp_ffn}" ]; then
    _debug "Failed to find cpp file '${_cpp_ffn}'"
    die "Compilation failed; cpp file not found"
  fi

  local _obj_ffn="${_EXAMPLES_FOLDER}/${_EXAMPLE_NAME}/${_EXAMPLE_SUBNAME}.o"
  local _bin_ffn="${_EXAMPLES_FOLDER}/${_EXAMPLE_NAME}/${_EXAMPLE_SUBNAME}_bin"
  local _clog_ffn="${_EXAMPLES_FOLDER}/${_EXAMPLE_NAME}/${_EXAMPLE_SUBNAME}.a.log"

  rm -rf ${_obj_ffn}
  rm -rf ${_bin_ffn}
  rm -rf ${_clog_ffn}

  `g++ -std=c++14 -c ${_cpp_ffn} -o ${_obj_ffn} &> ${_clog_ffn} || true`
  if [ ! -f ${_obj_ffn} ]; then
    cat ${_clog_ffn}
    die "Compilation failed; no obj"
  fi
  `g++ -o ${_bin_ffn} ${_obj_ffn} &> ${_clog_ffn} || true`
  if [ ! -f ${_obj_ffn} ]; then
    cat ${_clog_ffn}
    die "Compilation failed; no bin"
  fi

  ${_bin_ffn}

  printf "Compile done"
}

_clean_compiled() {
  echo "This is '_clean_compiled' function"
}

# #### #### #### #### #### #### #### #### #### #### #### #### #### ####

_show_diff() {
  local _cpp_ffn="${_EXAMPLES_FOLDER}/${_EXAMPLE_NAME}/${_EXAMPLE_SUBNAME}.cpp"
  if [ ! -f "${_cpp_ffn}" ]; then
    _debug "Failed to find cpp file '${_cpp_ffn}'\\n"
    die "Show diff failed; cpp file not found\\n"
  fi

  local _unc_ffn="${_EXAMPLES_FOLDER}/${_EXAMPLE_NAME}/${_EXAMPLE_SUBNAME}.unc.cpp"
  if [ ! -f "${_unc_ffn}" ]; then
    _debug "Failed to find default condig file '${_unc_ffn}'\\n"
    _debug "You need to generate it first\\n"
    die "Show diff failed; default config file not found"
  fi

  printf "Calling \"${_DIFF_TOOL}\"... "
  ${_DIFF_TOOL} ${_cpp_ffn} ${_unc_ffn}
  printf "Done\\n"
}

# #### #### #### #### #### #### #### #### #### #### #### #### #### ####

_uncrustify() {
  local _cpp_ffn="${_EXAMPLES_FOLDER}/${_EXAMPLE_NAME}/${_EXAMPLE_SUBNAME}.cpp"
  if [ ! -f "${_cpp_ffn}" ]; then
    _debug "Failed to find cpp file '${_cpp_ffn}'\\n"
    die "Formatting file failed; cpp file not found\\n"
  fi

  local _cfg_ffn="${_EXAMPLES_FOLDER}/${_EXAMPLE_NAME}/${_EXAMPLE_SUBNAME}.cfg"
  if [ ! -f "${_cfg_ffn}" ]; then
    _debug "Failed to find condig file '${_cfg_ffn}'\\n"
    die "Formatting file failed; default config file not found"
  fi

  local _rez_ffn="${_EXAMPLES_FOLDER}/${_EXAMPLE_NAME}/${_EXAMPLE_SUBNAME}.unc.cpp"
  rm -rf ${_rez_ffn}

  ${_UNCRUSTIFY_CMD} -c ${_cfg_ffn} -o ${_rez_ffn} -f ${_cpp_ffn}

  printf "File ${_cpp_ffn} formatted according to config for ${_EXAMPLE_SUBNAME}\\n"
}

# #### #### #### #### #### #### #### #### #### #### #### #### #### ####

_uncrustify_def() {
  local _cpp_ffn="${_EXAMPLES_FOLDER}/${_EXAMPLE_NAME}/${_EXAMPLE_SUBNAME}.cpp"
  if [ ! -f "${_cpp_ffn}" ]; then
    _debug "Failed to find cpp file '${_cpp_ffn}'\\n"
    die "Formatting file with default config failed; cpp file not found\\n"
  fi

  local _def_conf="${_EXAMPLES_FOLDER}/default.cfg"
  if [ ! -f "${_def_conf}" ]; then
    _debug "Failed to find default condig file '${_def_conf}'\\n"
    _debug "You can generate it with command like 'uncrustify --update-config > ./default.cfg'\\n"
    die "Formatting file with default config failed; default config file not found"
  fi

  ${_UNCRUSTIFY_CMD} -c ./default.cfg --replace --no-backup ${_cpp_ffn}

  printf "File ${_cpp_ffn} formatted according to default config\\n"
}

###############################################################################
# Other functions
###############################################################################

_check_example() {
  local _frez=`find ${_EXAMPLES_FOLDER} -type d -name ${_EXAMPLE_NAME}`

  if [ -z "${_frez}" ]; then
    _FUNC_ERROR_MSG="Folder with example was not found"
    _debug printf ">> Example name is \"${_EXAMPLE_NAME}\"\\n"
    _debug printf ">> Searched in '$_EXAMPLES_FOLDER'\\n"
  fi
  # echo "like tested and everything is ok"
}

###############################################################################
# Main
###############################################################################

# _main()
#
# Usage:
#   _main [<options>] [<arguments>]
#
# Description:
#   Entry point for the program, handling basic option parsing and dispatching.
_main() {
  if ((_PRINT_HELP))
  then
    _print_help
  else
    _debug printf ">> Performing command ${_COMMAND} over example ${_EXAMPLE_NAME}\\n"
    _debug printf ">> Example is ${_EXAMPLE_NAME} : ${_EXAMPLE_SUBNAME}\\n"

    _check_example
    if [ -n "${_FUNC_ERROR_MSG}" ]; then
      die ">> Example value is bad (${_FUNC_ERROR_MSG})"
    fi

    if [ "${_COMMAND}" == "${_CMD_TAG_COMPILE}" ]; then
      _compile
      exit
    fi
    if [ "${_COMMAND}" == "clean_compiled" ]; then
      _clean_compiled
      exit
    fi
    if [ "${_COMMAND}" == "${_CMD_TAG_DIFF}" ]; then
      _show_diff
      exit
    fi
    if [ "${_COMMAND}" == "${_CMD_TAG_UNCRUSTIFY}" ]; then
      _uncrustify
      exit
    fi
    if [ "${_COMMAND}" == "${_CMD_TAG_UNCRUSTIFY_DEF}" ]; then
      _uncrustify_def
      exit
    fi



    printf ">> Unknown command \"${_COMMAND}\"; nothing to do."
  fi
}

# Call `_main` after everything has been defined.
_main "$@"
