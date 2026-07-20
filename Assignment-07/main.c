#include <stdio.h>

struct Patient
{
    int id;
    char name[30];
    int age;
    char disease[30];
};

int main()
{
    struct Patient p[100];
    int n = 0;
    int choice, id, i, found;

    do
    {
        printf("\n===== Hospital Patient Management =====\n");
        printf("1. Add Patient\n");
        printf("2. Display Patients\n");
        printf("3. Search Patient\n");
        printf("4. Update Patient\n");
        printf("5. Delete Patient\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("Enter Patient ID: ");
                scanf("%d", &p[n].id);

                printf("Enter Patient Name: ");
                scanf("%s", p[n].name);

                printf("Enter Age: ");
                scanf("%d", &p[n].age);

                printf("Enter Disease: ");
                scanf("%s", p[n].disease);

                n++;

                printf("Patient Added Successfully!\n");
                break;

            case 2:

                if(n == 0)
                {
                    printf("No Patient Records Found!\n");
                }
                else
                {
                    printf("\nPatient Records\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nID : %d", p[i].id);
                        printf("\nName : %s", p[i].name);
                        printf("\nAge : %d", p[i].age);
                        printf("\nDisease : %s\n", p[i].disease);
                    }
                }

                break;

            case 3:

                printf("Enter Patient ID to Search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(p[i].id == id)
                    {
                        printf("\nPatient Found\n");
                        printf("ID : %d\n", p[i].id);
                        printf("Name : %s\n", p[i].name);
                        printf("Age : %d\n", p[i].age);
                        printf("Disease : %s\n", p[i].disease);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Patient Not Found!\n");
                }

                break;

            case 4:

                printf("Enter Patient ID to Update: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(p[i].id == id)
                    {
                        printf("Enter New Name: ");
                        scanf("%s", p[i].name);

                        printf("Enter New Age: ");
                        scanf("%d", &p[i].age);

                        printf("Enter New Disease: ");
                        scanf("%s", p[i].disease);

                        printf("Patient Updated Successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Patient Not Found!\n");
                }

                break;

            case 5:

                printf("Enter Patient ID to Delete: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(p[i].id == id)
                    {
                        int j;

                        for(j = i; j < n - 1; j++)
                        {
                            p[j] = p[j + 1];
                        }

                        n--;

                        printf("Patient Deleted Successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Patient Not Found!\n");
                }

                break;

            case 6:

                printf("Thank You!\n");
                break;

            default:

                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}
