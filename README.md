# Assignment 03 - Pointer Playground

## Objective

To understand the basic concepts of pointers in C.

## Problem Statement

Create a program to demonstrate pointer concepts such as displaying memory addresses, dereferencing pointers, swapping two numbers using pointers, traversing an array using pointers, and pointer arithmetic.

## Algorithm

1. Declare an integer and a pointer.
2. Store the address of the integer in the pointer.
3. Display the value and memory address.
4. Swap two numbers using a function with pointers.
5. Read an array and traverse it using a pointer.
6. Demonstrate pointer arithmetic using `p++`.

## Time Complexity

- Pointer display: O(1)
- Swap: O(1)
- Array Traversal: O(n)
- Pointer Arithmetic: O(1)

## Space Complexity

O(1)

## Sample Input

```
10
20
1 2 3 4 5
```

## Sample Output

```
Value of num = 10
Address of num = 0x...
Pointer stores address = 0x...
Value using pointer = 10

Before Swap: 10 20
After Swap: 20 10

Array Elements:
1 2 3 4 5

Address = 0x...
Value = 1

After p++
Address = 0x...
Value = 2
```

## Learning Outcome

- Pointer declaration
- Pointer dereferencing
- Passing pointers to functions
- Array traversal using pointers
- Pointer arithmetic