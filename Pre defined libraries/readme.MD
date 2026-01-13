# 📚 Predefined C Libraries (Standard Header Files)

This document explains commonly used predefined C libraries that provide built-in functions for handling input/output, strings, memory, time, characters, and mathematical operations.

---

## stdio.h
Used for standard input and output operations.

Common Functions:
- printf() – display output
- scanf() – take input
- getchar() – read a character
- putchar() – print a character

Example:
#include <stdio.h>
printf("Hello World");

---

## string.h
Used for string handling and manipulation.

Common Functions:
- strlen() – find string length
- strcpy() – copy strings
- strcat() – concatenate strings
- strcmp() – compare strings

Example:
#include <string.h>
printf("%d", strlen("Hello"));

---

## stdlib.h
Used for memory management, random numbers, and program control.

Common Functions:
- malloc() – allocate memory
- free() – deallocate memory
- rand() – generate random numbers
- srand() – seed random generator
- exit() – terminate program

Example:
#include <stdlib.h>
printf("%d", rand() % 100);

---

## time.h
Used for handling date and time.

Common Functions:
- time() – get current time
- ctime() – convert time to string
- clock() – measure CPU time

Example:
#include <time.h>
time_t t = time(NULL);
printf("%s", ctime(&t));

---

## ctype.h
Used for character testing and conversion.

Common Functions:
- isalpha() – check alphabet
- isdigit() – check digit
- isalnum() – check alphanumeric
- toupper() – convert to uppercase
- tolower() – convert to lowercase

Example:
#include <ctype.h>
printf("%d", isdigit('5'));

---

## math.h
Used for mathematical operations.

Common Functions:
- sqrt() – square root
- pow() – power calculation
- ceil() – round up
- floor() – round down
- sin(), cos() – trigonometric functions

Example:
#include <math.h>
printf("%.2f", sqrt(25));

---

## Summary
Predefined C libraries provide ready-made functions that reduce complexity and improve efficiency in programs. Mastering these libraries is essential for strong C programming fundamentals.
