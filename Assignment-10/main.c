#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;
    int temp;
    int largest, secondLargest;
    int smallest, secondSmallest;
    int key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sort Array
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted Array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    smallest = arr[0];
    secondSmallest = arr[1];
    largest = arr[n - 1];
    secondLargest = arr[n - 2];

    printf("\n\nSmallest = %d", smallest);
    printf("\nSecond Smallest = %d", secondSmallest);
    printf("\nLargest = %d", largest);
    printf("\nSecond Largest = %d\n", secondLargest);

    printf("\nReversed Array:\n");

    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\nArray Without Duplicates:\n");

    for(i = 0; i < n; i++)
    {
        int duplicate = 0;

        for(j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }
        }

        if(duplicate == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\n\nFrequency of Elements:\n");

    for(i = 0; i < n; i++)
    {
        int count = 1;

        if(arr[i] == -1)
        {
            continue;
        }

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;
            }
        }

        if(arr[i] != -1)
        {
            printf("%d = %d\n", arr[i], count);
        }
    }

    printf("\nEnter element to search: ");
    scanf("%d", &key);

    found = 0;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element Found.\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element Not Found.\n");
    }

    return 0;
}
