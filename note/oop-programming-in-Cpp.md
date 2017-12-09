## Chapter 1. The big picture
- _Structured Programming_: functions and modules (a group of components that execute lists of instructions)
- problems with structured programming:
  1. functions have unrestricted access to global data
  2. does a poor job of modeling things in the real world
- Reusability: by adding additional features to an existing class with inheritance (vs wrapping up an existing class)
  - Inheritance: 'adding' APIs, to extend/customize it
  - Wrapper: 'modifying/reducing' APIs, to make something general to be customized to our need (we need a term here _specification_)

## Chapter 2. Basics
- _Directives_: (命令) not a statement (does not end with `;`); not part of the basic C++ language
  - preprocessor directive: starts with `#`, an instruction to the compiler (more precisely, the _preprocessor_ of the compiler)
    - `#include` tells the preprocessor to insert the specified file into the source file (literally)
```
# include <iostream>
```
  - `using namespace std` directive: telling the preprocessor that the following statements are all in `std` namespace
- __Variables__: the named storage in the program that we can manipulate
  - size: is system dependent. Ex: int occupies 4 bytes(32 bits) in a 32-bit system
