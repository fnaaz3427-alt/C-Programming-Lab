#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    int age;
};

int main()
{
    struct Student s[100];
    int n = 0;
    int choice, id, i, found;

    do
    {
        printf("\n----- Student Record Management -----\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Student ID: ");
                scanf("%d", &s[n].id);

                printf("Enter Name: ");
                scanf("%s", s[n].name);

                printf("Enter Age: ");
                scanf("%d", &s[n].age);

                n++;
                printf("Student Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Records Found.\n");
                }
                else
                {
                    printf("\nStudent Records:\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("ID: %d\n", s[i].id);
                        printf("Name: %s\n", s[i].name);
                        printf("Age: %d\n\n", s[i].age);
                    }
                }
                break;

            case 3:
                printf("Enter Student ID to Search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(s[i].id == id)
                    {
                        printf("Record Found\n");
                        printf("ID: %d\n", s[i].id);
                        printf("Name: %s\n", s[i].name);
                        printf("Age: %d\n", s[i].age);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Record Not Found\n");
                }
                break;

            case 4:
                printf("Enter Student ID to Update: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(s[i].id == id)
                    {
                        printf("Enter New Name: ");
                        scanf("%s", s[i].name);

                        printf("Enter New Age: ");
                        scanf("%d", &s[i].age);

                        printf("Record Updated Successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Record Not Found\n");
                }
                break;

            case 5:
                printf("Enter Student ID to Delete: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(s[i].id == id)
                    {
                        int j;

                        for(j = i; j < n - 1; j++)
                        {
                            s[j] = s[j + 1];
                        }

                        n--;
                        printf("Record Deleted Successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Record Not Found\n");
                }
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
