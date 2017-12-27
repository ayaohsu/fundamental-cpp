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
  - `int` size: is system dependent. Ex: int occupies 4 bytes(32 bits) in a 32-bit system, 2 bytes in 16-bit systems
  - `long` (or `long int`): fixed size of 4 bytes no matter what system is used
  - `short`: fixed size of 2 bytes no matter what system is used
- __floating point types__
  - Format: (integer part).(fractional part)
  - In computer, this is implemented as scientific notation, with the digital term and the exponential term
  - __precision__ of a floating point type: how many ignificant digits it can _represent_ without information loss
    - ex: `f = 1.2345f` will be 1.2345 in precision 5, but 1.23450005054 in precision 12
  - `float`: handles precision of about 7 digits from 3.4×10^–38 to 3.4×10^38
  - `double`: handles precision of about 15 digits from 1.7×10^–308 to 1.7×10^308
- #define vs const for constants
  - `#define PI 3.14159`: telling the compiler to replace PI with the text 3.14159 throughout the program
  - Popular in C. However, you can't specify the data type, which can lead to bugs.
- __manipulator__: helper functions that are used to control the input/output streams.
  - `setw(n)` sets the _field width_ for the output operation
- __overflow__: caused by an arithmetic operation attempting to create a numeric value that is outside of the range that can be represented with a given number of bits
  - `int intVariable = 1500000000*2/3;` where max of int is 2,147,483,647, which will be overflown temporarily by 3,000,000,000.
  - the result will be incorrect: `-431655765`
- __cast__: where programmer needs to convert one type to another in a situation where the compiler will not do it automatically or without complaint
  - The purpose can be achieved by declaring a second variable with a different type, and assign to it; but this is hard to read the programmer's intention, and is verbose and redundant
  - Three kinds of casting: static, dynamic, reintepret 
- __Compile and Linking__: 
  - In the compile time, `#include` the header file that contains the declaration of the 1. library functions or 2. user function
  - two ways to include: `<>` and `""`. 
    - angle brackets indicates that the compiler will search the files from  INCLUDE directory
    - quatation marks instruct the compiler to begin its search for the header file in the current directory
  - Compiler generated the object code from the source code, and marks the reference to the library functions
  - Then linker resolves the reference by extract the executable code from the library files

TODO: line 13, doesn't look like it is doing the copy and paste in the compile time
"- `#include` tells the preprocessor to insert the specified file into the source file (literally)"
