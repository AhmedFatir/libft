# libft
This is my implementation of the libft project from 42 school.

Description
Libft is a library of commonly used C functions that can be reused across projects. 
The library includes functions for manipulating strings, memory, lists, and other data types.

Installation
To install and use the libft library, follow these steps:

Clone the repository: git clone 
Change into the project directory: cd libft
Build the library: make
Note: The make command will compile all the .c files in the libft directory and create a libft.a file,
which is the static library that you can link to your project.

Usage
To use the libft library in your project, follow these steps:

Include the libft.h header file in your project: #include "libft.h"
Link your project to the libft library: -L/path/to/libft -lft
Call the libft functions in your project as needed.
Note: The library functions are organized into different header files based on their functionality, 
such as libft.h, libft_list.h, libft_mem.h, libft_string.h, and so on. 
You can include only the header files that you need in your project.

Contents
The libft library includes the following directories and files:

Makefile: The makefile for building the library.
libft.h: The main header file for the library.
libft.a: The static library file that is created by running the make command.
src: The directory containing the source files for the library.
