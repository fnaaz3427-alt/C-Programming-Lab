#include <stdio.h>

struct Employee
{
    int id;
    char name[30];
    float basic;
    float hra;
    float da;
    float tax;
    float gross;
    float net;
};

int main()
{
    struct Employee e[100], temp;
    int n = 0;
    int choice, i, j;

    do
    {
        printf("\n===== Employee Payroll System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Sort by Net Salary\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("Enter Employee ID: ");
                scanf("%d", &e[n].id);

                printf("Enter Employee Name: ");
                scanf("%s", e[n].name);

                printf("Enter Basic Salary: ");
                scanf("%f", &e[n].basic);

                e[n].hra = e[n].basic * 0.20;
                e[n].da = e[n].basic * 0.10;
                e[n].tax = e[n].basic * 0.05;
                e[n].gross = e[n].basic + e[n].hra + e[n].da;
                e[n].net = e[n].gross - e[n].tax;

                printf("Employee Added Successfully!\n");

                n++;
                break;

            case 2:

                if(n == 0)
                {
                    printf("No Employee Records!\n");
                }
                else
                {
                    printf("\nEmployee Salary Report\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nID : %d", e[i].id);
                        printf("\nName : %s", e[i].name);
                        printf("\nBasic Salary : %.2f", e[i].basic);
                        printf("\nHRA : %.2f", e[i].hra);
                        printf("\nDA : %.2f", e[i].da);
                        printf("\nTax : %.2f", e[i].tax);
                        printf("\nGross Salary : %.2f", e[i].gross);
                        printf("\nNet Salary : %.2f\n", e[i].net);
                    }
                }

                break;

            case 3:

                for(i = 0; i < n - 1; i++)
                {
                    for(j = i + 1; j < n; j++)
                    {
                        if(e[i].net > e[j].net)
                        {
                            temp = e[i];
                            e[i] = e[j];
                            e[j] = temp;
                        }
                    }
                }

                printf("Employees Sorted by Net Salary.\n");

                break;

            case 4:

                printf("Thank You!\n");
                break;

            default:

                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
