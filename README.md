Number System Converter

A number system converter written in C that converts decimal integers into different number systems using a user-specified base.

Features

- Converts decimal integers to bases from 2 to 36.
- Supports positive and negative integers.
- Handles zero as a special case.
- Uses digits "0–9" and uppercase letters "A–Z" to represent values in different bases.
- Allows users to choose the target base.

Supported Bases

The program supports bases ranging from 2 to 36.

Base| Number System
2| Binary
8| Octal
10| Decimal
16| Hexadecimal
2–36| Other supported bases

Examples

Example 1: Decimal to Binary

Input:

Decimal number: 10
Target base: 2

Output:

1010

Example 2: Decimal to Hexadecimal

Input:

Decimal number: -255
Target base: 16

Output:

-FF

Example 3: Decimal to Base 8

Input:

Decimal number: 64
Target base: 8

Output:

100

Requirements

- A C compiler, such as GCC.
- Code::Blocks or another compatible development environment, if preferred.

How to Compile and Run

Using Code::Blocks

1. Open the project or source file in Code::Blocks.
2. Build the program.
3. Run the compiled program.
4. Enter a decimal integer and the desired target base when prompted.

Using GCC

Compile the source file:

gcc main.c -o converter

Run on Linux:

./converter

On Windows, run the generated executable:

converter.exe

Concepts Used

- C programming
- Variables and data types
- Loops and conditional statements
- Arrays
- Integer arithmetic
- Number system conversion
- Handling negative integers

Source Code

The source code is available in this repository in "main.c".

License

This project is licensed under the MIT License. See the "LICENSE" file for details.
