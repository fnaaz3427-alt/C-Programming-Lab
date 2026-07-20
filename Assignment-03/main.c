#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num = 10;
    int *ptr;

    ptr = &num;

    printf("----- Pointer Demonstration -----\n");
    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", &num);
    printf("Pointer stores address = %p\n", ptr);
    printf("Value using pointer = %d\n", *ptr);

    printf("\n----- Swap Two Numbers -----\n");

    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before Swap: %d %d\n", a, b);

    swap(&a, &b);

    printf("After Swap: %d %d\n", a, b);

    printf("\n----- Array Traversal Using Pointer -----\n");

    int arr[5];
    int i;
    int *p;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    p = arr;

    printf("Array Elements:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }

    printf("\n");

    printf("\n----- Pointer Arithmetic -----\n");

    printf("Address = %p  Value = %d\n", p, *p);
    p++;

    printf("After p++\n");
    printf("Address = %p  Value = %d\n", p, *p);

    return 0;
}
