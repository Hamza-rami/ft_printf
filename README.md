printf Implementation

Overview

This project is a custom implementation of the printf function in C, created as part of my learning journey at 1337 School. It mimics the behavior of the standard printf function while providing an opportunity to deepen my understanding of variadic functions and formatted output.

Features

Supports basic format specifiers: %c, %s, %d, %i, %u, %x, %X, and %p.

Handles simple and complex formatting cases.

Written from scratch without using standard libraries, focusing on understanding low-level concepts.

Usage

To use this implementation, follow these steps:

1. Clone the repository:

(https://github.com/Hamza-rami/ft_printf)

2. Navigate to the project directory:

cd printf

3. Compile the code:

gcc -Wall -Wextra -Werror -o my_printf main.c printf.c

4. Run the executable:

./my_printf

Examples

Here are some examples of using the custom printf:

my_printf("Character: %c\n", 'A');
my_printf("String: %s\n", "Hello, World!");
my_printf("Integer: %d\n", 42);
my_printf("Hexadecimal: %x\n", 255);

File Structure

printf.c: Contains the core implementation of the printf function.

main.c: Test cases and usage examples.

README.md: Documentation for the project.

Notes

This project was created for educational purposes and may not include all the features of the standard printf. Contributions and suggestions are welcome.

Author

Hamza Rami
