*This project has been created as part of the 42 curriculum by Doaa Mansour*

# libft
---
## Description

Libft is a personal C library developed as part of the 42 curriculum. 
The purpose of this project is to reimplement standard C library functions and create additional utility functions from scratch.

This project helps in understanding:
- Memory management using malloc and free
- Pointer manipulation
- String handling
- Implementation details of standard C functions

The library follows all 42 rules and constraints and is reusable for future C projects.

---

## Project Parts

### Part 1: Libc Functions
Reimplementation of standard C library functions related to memory, strings, and characters.

Examples:
- ft_strlen, ft_memcpy, ft_memset, ft_strlcpy
- ft_isalpha, ft_isdigit, ft_toupper, ft_tolower

---

### Part 2: Additional Functions
Utility functions not included in the standard C library.

Examples:
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa

---

### Part 3: Memory Allocation Functions
Functions related to dynamic memory allocation.

Examples:
- ft_calloc
- ft_strdup

---

### Part 4: File Descriptor Functions
Functions that write output to a given file descriptor.

Examples:
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

---

## Resources & References

- Linux man pages 
- 42 curriculum guidelines
- Tutorials on pointers, memory, and strings
- youtube
## AI Usage Disclaimer

AI tools were used strictly as **learning aids**:

- ai: Understanding C concepts, reviewing function behavior, clarifying edge cases

All code was **written and tested** by the student, following 42 academic integrity rules.
## Compilation To compile the library, run:
From the root directory of the project, run:

Include the header file in your source code: #include "libft.h"
Compile your program with the library: gcc main.c libft.a
Run the executable: ./a.out
