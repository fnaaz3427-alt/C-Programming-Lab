# Assignment 09 - Dynamic Array Operations

## Objective

To learn dynamic arrays, searching, sorting, insertion, deletion, and updating in C.

## Problem Statement

Create a program to perform insertion, deletion, updating, searching, displaying elements in a dynamic array, and compare Linear Search and Binary Search after sorting.

## Algorithm

1. Create a dynamic array using malloc().
2. Enter array elements.
3. Display the menu.
4. Perform insert, delete, update, display, search, and sort operations.
5. Perform Binary Search after sorting.
6. Exit the program.

## Time Complexity

- Insert: O(n)
- Delete: O(n)
- Update: O(1)
- Linear Search: O(n)
- Sort: O(n²)
- Binary Search: O(log n)

## Space Complexity

O(n)

## Sample Input

```
5
10 20 30 40 50
1
2
3
25
1
6
7
30
8
```

## Sample Output

```
Array Elements:
10 20 30 40 50

Element Inserted Successfully!

Array Elements:
10 20 25 30 40 50

Array Sorted Successfully!

Element Found at Position 4
```

## Learning Outcome

- Learned dynamic memory allocation.
- Learned insertion and deletion.
- Learned linear and binary search.
- Learned sorting techniques.
