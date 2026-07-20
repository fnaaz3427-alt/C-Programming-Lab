#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i, choice;
    int pos, value;
    int found;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n===== Dynamic Array Operations =====\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Update Element\n");
        printf("5. Linear Search\n");
        printf("6. Sort Array\n");
        printf("7. Binary Search\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("Array Elements: ");

                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }

                printf("\n");
                break;

            case 2:

                printf("Enter Position: ");
                scanf("%d", &pos);

                printf("Enter Value: ");
                scanf("%d", &value);

                arr = realloc(arr, (n + 1) * sizeof(int));

                for(i = n; i > pos - 1; i--)
                {
                    arr[i] = arr[i - 1];
                }

                arr[pos - 1] = value;
                n++;

                printf("Element Inserted Successfully!\n");
                break;

            case 3:

                printf("Enter Position to Delete: ");
                scanf("%d", &pos);

                for(i = pos - 1; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }

                n--;

                printf("Element Deleted Successfully!\n");
                break;

            case 4:

                printf("Enter Position to Update: ");
                scanf("%d", &pos);

                printf("Enter New Value: ");
                scanf("%d", &arr[pos - 1]);

                printf("Element Updated Successfully!\n");
                break;

            case 5:

                printf("Enter Value to Search: ");
                scanf("%d", &value);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(arr[i] == value)
                    {
                        printf("Element Found at Position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Element Not Found!\n");
                }

                break;

            case 6:

                {
                    int j, temp;

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

                    printf("Array Sorted Successfully!\n");
                }

                break;

            case 7:

                printf("Enter Value to Search: ");
                scanf("%d", &value);

                {
                    int low = 0;
                    int high = n - 1;
                    int mid;

                    found = 0;

                    while(low <= high)
                    {
                        mid = (low + high) / 2;

                        if(arr[mid] == value)
                        {
                            printf("Element Found at Position %d\n", mid + 1);
                            found = 1;
                            break;
                        }
                        else if(arr[mid] < value)
                        {
                            low = mid + 1;
                        }
                        else
                        {
                            high = mid - 1;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Element Not Found!\n");
                    }
                }

                break;

            case 8:

                printf("Thank You!\n");
                break;

            default:

                printf("Invalid Choice!\n");
        }

    } while(choice != 8);

    free(arr);

    return 0;
}