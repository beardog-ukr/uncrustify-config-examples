#!/usr/bin/env bash

# Based on:
# Bash Boilerplate: https://github.com/alphabetum/bash-boilerplate
set -o nounset
set -o errexit
trap 'echo "Aborting due to errexit on line $LINENO. Exit code: $?" >&2' ERR
set -o errtrace
set -o pipefail
IFS=$'\n\t'

###############################################################################
# Environment
###############################################################################

_ME=$(basename "${0}")

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
    printf "――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――\\n"
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
  Generates examples website using mkdocs

Usage:
  ${_ME} [--options] [<arguments>]
  ${_ME} -h | --help

Options:
  -h --help     Display this help information.
  -b --build    Build documentation
  -d --docs     removes ../docs folder; copies generated folder there instead
HEREDOC
}

###############################################################################
# Options
###############################################################################

# Parse Options ###############################################################

# Initialize program option variables.
_PRINT_HELP=0
_USE_DEBUG=0

# Initialize additional expected option variables.
_BUILD=0
_MOVE_GENERATED=0
_SHORT_OPTION_WITH_PARAMETER=""
_LONG_OPTION_WITH_PARAMETER=""

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
    -b|--build)
      _BUILD=1
      ;;
    -d|--docs)
      _MOVE_GENERATED=1
      ;;
    -o)
      _require_argument "${__option}" "${__maybe_param}"
      _SHORT_OPTION_WITH_PARAMETER="${__maybe_param}"
       shift
      ;;
    --long-option-with-argument)
      _require_argument "${__option}" "${__maybe_param}"
      _LONG_OPTION_WITH_PARAMETER="${__maybe_param}"
      shift
      ;;
    --endopts)
      # Terminate option parsing.
      break
      ;;
    -*)
      _die printf "Unexpected option: %s\\n" "${__option}"
      ;;
  esac
  shift
done

###############################################################################
# Program Functions
###############################################################################

# _do_build()
#
# Usage:
#   _do_build 
#
# No arguments required.
# Calls mkdocs to make a clean build
_do_build() {
  _debug  printf "build documentation with mkdocs\\n"

  _CURR_FOLDER=`pwd`
  if [[ ! ${_CURR_FOLDER} =~ ^.*mkdocs$ ]]
  then 
    die "Current folder MUST be ./mkdocs"
  fi

  mkdocs build --clean

  if ((_MOVE_GENERATED)) 
  then
    rm -rf ../docs
    mv ./site ../docs
  fi

  # if [[ -n "${_SHORT_OPTION_WITH_PARAMETER}" ]]
  # then
  #   printf "Short option parameter: %s\\n" "${_SHORT_OPTION_WITH_PARAMETER}"
  # fi
  # if [[ -n "${_LONG_OPTION_WITH_PARAMETER}" ]]
  # then
  #   printf "Long option parameter: %s\\n" "${_LONG_OPTION_WITH_PARAMETER}"
  # fi
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
    exit 0
  fi

  if ((_BUILD))
  then
    _do_build
    exit 0
  fi

  #else
  die "Please specify some option"
}

# Call `_main` after everything has been defined.
_main "$@"
