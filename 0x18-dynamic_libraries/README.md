## STARTED WITH C
### PROJECT NUMBER 23

# 0x18. C - Dynamic libraries

This directory contains a set of C functions compiled into dynamic libraries to perform various operations.

## Overview
The project focuses on creating dynamic libraries (`libdynamic.so` and `liball.so`) and utilizing them to enable C functions to be called from Python.
It includes scripts to create these libraries and demonstrates their functionality through test scripts.

## Tasks

### Task 0: Create Dynamic Library
- File: `libdynamic.so`, `main.h`
- Description: A dynamic library `libdynamic.so` containing functions like `_putchar`, `_islower`, `_isdigit`, etc., is created.

### Task 1: Create All from Current Directory
- File: `liball.so`
- Description: A script `1-create_dynamic_lib.sh` compiles all `.c` files in the current directory into a single dynamic library `liball.so`.

### Task 2: Call C Functions from Python
- File: `100-operations.so`, `100-tests.py`
- Description: A dynamic library `100-operations.so` is created with C functions (`add`, `sub`, `mul`, `div`, `mod`) callable from Python, demonstrated through `100-tests.py`.

