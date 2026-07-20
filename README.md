# Assignment 05 - Dynamic Array Management

## Objective

To learn dynamic memory allocation using malloc() and free() in C.

## Problem Statement

Create a program that dynamically allocates memory for storing student marks. Display the marks and calculate total, average, highest, and lowest marks. Free the allocated memory after use.

## Algorithm

1. Enter the number of students.
2. Allocate memory using malloc().
3. Enter marks of all students.
4. Display all marks.
5. Find total, average, highest, and lowest marks.
6. Free the allocated memory.
7. End the program.

## Time Complexity

Input: O(n)

Display: O(n)

Calculation: O(n)

Overall: O(n)

## Space Complexity

O(n)

## Sample Input

```
5
70
85
90
60
75
```

## Sample Output

```
Enter number of students: 5

Enter marks:
Student 1: 70
Student 2: 85
Student 3: 90
Student 4: 60
Student 5: 75

Student Marks:
70 85 90 60 75

Total Marks = 380
Average Marks = 76.00
Highest Marks = 90
Lowest Marks = 60

Memory Released Successfully.
```

## Learning Outcome

- Learned dynamic memory allocation.
- Learned to use malloc() and free().
- Learned pointer basics.
- Learned array operations.