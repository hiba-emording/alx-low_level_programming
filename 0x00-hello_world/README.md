# STARTED WITH C
## FIRST PROJECT

*Used betty coding style and documentation*

**0. Preprocessor**
<A script that runs a C file through the preprocessor and save the result into another file.>
* The C file name will be saved in the variable <$CFILE>
* The output should be saved in the file <c>
```
#!/bin/bash
gcc -E $CFILE > c
```

**1. Compiler**
<A script that compiles a C file but does not link.>
* The C file name will be saved in the variable <$CFILE>
* The output file should be named the same as the C file, but with the extension <.o> instead of <.c>
```
#!/bin/bash
gcc -c "$CFILE" -o "${CFILE%.c}.o"
```


