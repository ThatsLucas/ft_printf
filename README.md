
# **ft_printf** - A Custom Implementation of `printf`  

The **`ft_printf`** function is a custom implementation of the C standard library function `printf`, developed as part of the 42 curriculum. It offers formatted output functionality, similar to the original, but adheres to specific project constraints and requirements.

---

## **Features**

- Handles the following format specifiers:
  - **`%c`**: Prints a single character.
  - **`%s`**: Prints a string (or `(null)` if the string is `NULL`).
  - **`%p`**: Prints a pointer address (or `(nil)` for `NULL` pointers).
  - **`%d`**, **`%i`**: Prints a signed integer in base 10.
  - **`%u`**: Prints an unsigned integer in base 10.
  - **`%x`**: Prints an unsigned hexadecimal integer (lowercase).
  - **`%X`**: Prints an unsigned hexadecimal integer (uppercase).
  - **`%%`**: Prints a literal `%` character.

- Implements core functionality such as:
  - Outputting characters, strings, and integers.
  - Converting integers to various bases (decimal, hexadecimal).
  - Handling edge cases like negative numbers and `NULL` values.

- Returns the total number of characters printed.

---

## **Usage**

### **Function Prototype**
```c
int ft_printf(const char *format, ...);
```

### **Compilation**
To use the `ft_printf` function in your project:
1. Include `ft_printf.h` in your source file.
2. Compile `ft_printf.c` along with your project files. Example:
   ```bash
   cc main.c ft_printf.c libft.a -o ft_printf
   ```

### **Example**
```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hello, %s!\n", "World");
    ft_printf("Decimal: %d, Hex: %x, Pointer: %p\n", 42, 42, &main);
    return 0;
}
```
Output:
```
Hello, World!
Decimal: 42, Hex: 2a, Pointer: 0x<address>
```

---

## **Project Structure**
```
|-- ft_printf.c      # Main implementation of ft_printf.
|-- ft_printf.h      # Header file containing function prototypes.
|-- libft.a          # Your custom Libft library (required for certain utilities).
|-- Makefile         # Automates compilation of the project.
```

---

## **Makefile**
The Makefile simplifies the build process:
- **`make`**: Compiles the `libftprintf.a` library.
- **`make clean`**: Removes object files.
- **`make fclean`**: Removes object files and the compiled library.
- **`make re`**: Cleans and recompiles everything.

---

## **Return Value**
The `ft_printf` function returns the total number of characters printed, just like the standard `printf`.

---

## **Known Limitations**
- Does not handle floating-point specifiers (`%f`, `%e`, `%g`).
- Assumes valid format strings are provided (no error handling for invalid formats).

---

## **License**
This project is developed as part of the 42 curriculum and is freely available for educational use.
