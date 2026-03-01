# libft

## 📝 Description
This project is a personal implementation of a basic C library called **libft**.  
The goal is to understand how standard library functions work by recreating them from scratch.

By building this library, I’ve gained a solid understanding of:
- **String manipulation** (copying, searching, splitting)
- **Memory operations** (allocation, moving, comparing)
- **Data structures** (Linked Lists)
- **Makefile** creation and library archiving (`ar`)

---

## Instructions

### Prerequisites
To compile and use this library, you need a C compiler (`cc`, `gcc`, or `clang`).

### Compilation
Clone the repository and run one of the following commands in the root directory:

- `make`: Compiles the mandatory part of the library.
- `make bonus`: Compiles the mandatory and bonus part (Linked List functions).
- `make clean`: Removes the object files (`.o`).
- `make fclean`: Removes the object files and the library (`libft.a`).
- `make re`: Performs a full re-compilation (`fclean` + `all`).

### Usage
To use the library in your projects, include the header in your C files:
```c
#include "libft.h"
```
Then, compile your program with the library:
```bash
gcc your_program.c libft.a -o your_program
```
---

## Functions Overview

### Part 1 - Libc Functions
Standard functions from the `<ctype.h>`, `<string.h>`, and `<stdlib.h>` headers.

| Class | Functions |
| :--- | :--- |
| **Character Class** | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| **String Functions** | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| **Memory Functions** | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| **Conversion** | `ft_toupper`, `ft_tolower`, `ft_atoi` |

### Part 2 - Additional Functions
Custom utility functions for strings and integers.

- `ft_substr`: Extract a substring.
- `ft_strjoin`: Concatenate two strings.
- `ft_strtrim`: Trim specific characters from both ends.
- `ft_split`: Split a string into an array based on a delimiter.
- `ft_itoa`: Convert an integer to a string.
- `ft_strmapi` / `ft_striteri`: Map/Iterate over a string with a function.
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: Output functions to a file descriptor.

### Bonus - Linked List Functions (Part 3)
Operations to manipulate a simple linked list structure.

- `ft_lstnew`: Create a new node.
- `ft_lstadd_front` / `ft_lstadd_back`: Add nodes.
- `ft_lstsize`: Count nodes.
- `ft_lstlast`: Get the last node.
- `ft_lstdelone`, `ft_lstclear`: Delete/Clear nodes.
- `ft_lstiter`, `ft_lstmap`: Iterate/Transform lists.


