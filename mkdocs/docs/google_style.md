# Config for "Google C++ Style Guide"

The "[Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html#Formatting)" is detailed.

# Formatting

## Line length

Google recommends 80 character limit for line length. Uncrustify has two options: [code_width](other_options/code_width.md) for code and [cmt_width](other_options/cmt_width.md) for comments.
```
code_width = 80
cmt_width = 80
```
Also Google allows some exceptions from this rule.

##Indent
The guide specifies _"Use only spaces, and indent 2 spaces at a time."_
Config for this rule is
```
indent_with_tabs = 1
indent_columns = 2
```


# Full config
TBD
