#include <stdio.h>
#include <string.h>

void lengthString(char str[])
{
    printf("Length of string = %d\n", strlen(str));
}

void reverseString(char str[])
{
    int i, len = strlen(str);

    printf("Reversed String = ");

    for(i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

void palindrome(char str[])
{
    int i, len = strlen(str);
    int flag = 1;

    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("String is Palindrome\n");
    else
        printf("String is Not Palindrome\n");
}

void countData(char str[])
{
    int i;
    int vowels = 0, digits = 0, spaces = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowels++;
        }

        if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }

        if(str[i] == ' ')
        {
            spaces++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);
}

void frequency(char str[])
{
    int i, j;
    int visited[100] = {0};

    printf("Character Frequency:\n");

    for(i = 0; str[i] != '\0'; i++)
    {
        if(visited[i] == 1)
            continue;

        int count = 1;

        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("%c = %d\n", str[i], count);
    }
}

int main()
{
    char str[100];
    int choice;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    do
    {
        printf("\n----- String Utility Toolkit -----\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Check Palindrome\n");
        printf("4. Count Vowels, Digits and Spaces\n");
        printf("5. Character Frequency\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                lengthString(str);
                break;

            case 2:
                reverseString(str);
                break;

            case 3:
                palindrome(str);
                break;

            case 4:
                countData(str);
                break;

            case 5:
                frequency(str);
                break;

            case 6:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 6);

    return 0;
}