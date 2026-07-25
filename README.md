# Pointer Array Reference

This project demonstrates how arrays of pointers can be used to reference and access the elements of another array in C.

## Overview

The program generates a one-dimensional integer array filled with random values. It then dynamically allocates an array of pointers, where each pointer stores the address of an element in the original array.

Finally, the values are displayed twice:

1. Directly from the original array.
2. Indirectly through the array of pointers.

This project illustrates the relationship between memory addresses, pointers, and arrays.

## Features

- Dynamic allocation of an array of pointers.
- Random integer generation.
- Pointer assignment to existing array elements.
- Accessing data through pointer dereferencing.

## Technologies

- C
- Standard C Library
- Dev-C++

## Project Structure

```text
.
├── pointer_array_reference.cpp
├── README.md
├── LICENSE
└── .gitignore
```

## How to Compile

Using GCC:

```bash
g++ pointer_array_reference.cpp -o pointer_array_reference
```

## How to Run

Windows

```bash
pointer_array_reference.exe
```

Linux/macOS

```bash
./pointer_array_reference
```

## Example Output

```text
3, 7, 1, 9, 5

3, 7, 1, 9, 5
```

The first line corresponds to the original array.

The second line displays the same values by dereferencing the pointers stored in the pointer array.

## Concepts Demonstrated

- Arrays
- Pointer arrays
- Dynamic memory allocation
- Memory addresses
- Pointer dereferencing
- Random number generation

## Future Improvements

- Release dynamically allocated memory using `free()`.
- Display memory addresses alongside the values.
- Allow custom random number ranges.

## License

This project is licensed under the MIT License.

## Author

Luis Alva
