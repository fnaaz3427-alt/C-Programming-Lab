#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int num = 10;
    int *ptr;

    ptr = &num;

    printf("Pointer Playground\n\n");

    // Display address and value
    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", &num);
    printf("Value using pointer = %d\n", *ptr);

    // Swap two numbers
    int a, b;

    printf("\nEnter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before Swap: %d %d\n", a, b);

    swap(&a, &b);

    printf("After Swap: %d %d\n", a, b);

    // Array using pointer
    int arr[5];
    int i;

    printf("\nEnter 5 array elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("Array Elements:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    printf("\n");

    return 0;
}