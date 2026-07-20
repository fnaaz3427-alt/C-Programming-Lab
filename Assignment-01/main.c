#include <stdio.h>

int main()
{
    int marks[5];
    int i;
    int total = 0;
    int highest, lowest;
    float average;

    // Enter marks
    printf("Enter marks of 5 students:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Assume first mark is highest and lowest
    highest = marks[0];
    lowest = marks[0];

    // Find total, highest and lowest
    for (i = 0; i < 5; i++)
    {
        total = total + marks[i];

        if (marks[i] > highest)
        {
            highest = marks[i];
        }

        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    // Calculate average
    average = total / 5.0;

    // Display marks
    printf("\nStudent Marks:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", marks[i]);
    }

    // Display result
    printf("\nHighest Marks = %d", highest);
    printf("\nLowest Marks = %d", lowest);
    printf("\nTotal Marks = %d", total);
    printf("\nAverage Marks = %.2f", average);

    return 0;
}
