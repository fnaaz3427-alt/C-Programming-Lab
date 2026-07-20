#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *marks;
    int total = 0, highest, lowest;
    float average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    marks = (int *)malloc(n * sizeof(int));

    if(marks == NULL)
    {
        printf("Memory Allocation Failed!\n");
        return 0;
    }

    printf("Enter marks:\n");

    for(i = 0; i < n; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nStudent Marks:\n");

    for(i = 0; i < n; i++)
    {
        printf("Student %d = %d\n", i + 1, marks[i]);
    }

    highest = marks[0];
    lowest = marks[0];

    for(i = 0; i < n; i++)
    {
        total += marks[i];

        if(marks[i] > highest)
        {
            highest = marks[i];
        }

        if(marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    average = (float)total / n;

    printf("\nTotal Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);
    printf("Highest Marks = %d\n", highest);
    printf("Lowest Marks = %d\n", lowest);

    free(marks);

    printf("\nMemory Released Successfully.\n");

    return 0;
}
