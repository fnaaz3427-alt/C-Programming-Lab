# Assignment 05 - Dynamic Array Management

## Objective

To learn dynamic memory allocation in C using `malloc()` and `free()`.

## Problem Statement

Create a program that dynamically allocates memory to store student marks, displays the marks, calculates highest, lowest, total, and average marks, and finally releases the allocated memory.

## Algorithm

1. Enter the number of students.
2. Allocate memory using `malloc()`.
3. Input marks of all students.
4. Display all marks.
5. Calculate total, average, highest, and lowest marks.
6. Free the allocated memory using `free()`.

## Time Complexity

- Input: O(n)
- Display: O(n)
- Statistics Calculation: O(n)

Overall: **O(n)**

## Space Complexity

**O(n)**

## Sample Input

```
5
75
82
90
68
85
```

## Sample Output

```
Student Marks:
Student 1 = 75
Student 2 = 82
Student 3 = 90
Student 4 = 68
Student 5 = 85

Total Marks = 400
Average Marks = 80.00
Highest Marks = 90
Lowest Marks = 68

Memory Released Successfully.
```

## Learning Outcome

- Dynamic memory allocation
- `malloc()`
- `free()`
- Pointers
- Arrays
- Finding maximum, minimum, total, and average
