# Custom Math Library

This project involves the creation of a custom math library, implementing various functions from the math.h library to provide high-precision mathematical operations.

## Overview of Implemented math.h Functions

The following functions from the math.h library are implemented:

1. `s21_abs` - Calculate the absolute value of an integer.
2. `s21_acos` - Calculate the arccosine of a number.
3. `s21_asin` - Calculate the arcsine of a number.
4. `s21_atan` - Calculate the arctangent of a number.
5. `s21_ceil` - Round a number up to the nearest integer.
6. `s21_cos` - Calculate the cosine of an angle in radians.
7. `s21_exp` - Calculate the exponential value of a number.
8. `s21_fabs` - Calculate the absolute value of a floating-point number.
9. `s21_floor` - Round a number down to the nearest integer.
10. `s21_fmod` - Calculate the remainder of the division of two numbers.
11. `s21_log` - Calculate the natural logarithm of a number.
12. `s21_pow` - Raise a number to a specified power.
13. `s21_sin` - Calculate the sine of an angle in radians.
14. `s21_sqrt` - Calculate the square root of a number.
15. `s21_tan` - Calculate the tangent of an angle in radians.

## Implementation Details

- The library is developed in C language, adhering to the C11 standard and using the GCC compiler.
- The library code is organized within the `src` folder, located on the `develop` branch of the project repository.
- Outdated and legacy language constructions and library functions are avoided, and compliance with the POSIX.1-2017 standard is ensured.
- Coding style follows the Google style guidelines.
- The library is compiled as a static library and includes the header file `s21_math.h`.
- Structured programming principles are followed to minimize code duplication.
- Function names are prefixed with `s21_` for clarity.
- Comprehensive unit tests using the Check library ensure the correctness of each implemented function.
- Unit tests compare the results of the custom implementation with those of the standard math.h library.
- Unit tests cover at least 80% of the code for each function, as verified using `gcov`.
- A Makefile is provided to facilitate building the library and running tests. Available targets include `all`, `clean`, `test`, `s21_math.a`, and `gcov_report`.
- The `gcov_report` target generates a `gcov` report in the form of an HTML page.
- The implementation does not rely on copying code from the standard math.h library; instead, it's based on original logic.
- The library ensures a high level of precision with 16 significant digits and up to 6 decimal places for the fractional part.

## Getting Started

To build the library and run tests, use the following commands:

```bash
make all  # Build the library and tests
make test  # Run unit tests
make gcov_report  # Generate a coverage report
```

This will compile the library, execute unit tests, and create a coverage report.

## Usage

Include the `s21_math.h` header file in your C code to access the custom math functions:

```c
#include "s21_math.h"

int main() {
    double result = s21_sqrt(25.0);  // Calculate the square root of 25
    return 0;
}
```

## Conclusion

This custom math library provides accurate implementations of various math functions, ensuring precision and compliance with coding standards. It is a valuable addition to C projects requiring high-precision mathematical calculations.

For more details on individual functions and their usage, refer to the project's source code and documentation.

Feel free to explore and use this library in your own C projects.