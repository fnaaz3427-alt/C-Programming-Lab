#include <stdio.h>

struct Product
{
    int id;
    char name[30];
    float price;
    int quantity;
};

int main()
{
    struct Product p[100], temp;
    int n = 0;
    int choice, id, i, j, found;
    float total = 0;

    do
    {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Product\n");
        printf("5. Sort Products by Price\n");
        printf("6. Total Inventory Value\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("Enter Product ID: ");
                scanf("%d", &p[n].id);

                printf("Enter Product Name: ");
                scanf("%s", p[n].name);

                printf("Enter Product Price: ");
                scanf("%f", &p[n].price);

                printf("Enter Product Quantity: ");
                scanf("%d", &p[n].quantity);

                n++;

                printf("Product Added Successfully!\n");
                break;

            case 2:

                if(n == 0)
                {
                    printf("No Products Available!\n");
                }
                else
                {
                    printf("\nProduct List\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nID : %d", p[i].id);
                        printf("\nName : %s", p[i].name);
                        printf("\nPrice : %.2f", p[i].price);
                        printf("\nQuantity : %d\n", p[i].quantity);
                    }
                }

                break;

            case 3:

                printf("Enter Product ID to Search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(p[i].id == id)
                    {
                        printf("\nProduct Found\n");
                        printf("ID : %d\n", p[i].id);
                        printf("Name : %s\n", p[i].name);
                        printf("Price : %.2f\n", p[i].price);
                        printf("Quantity : %d\n", p[i].quantity);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Product Not Found!\n");
                }

                break;

            case 4:

                printf("Enter Product ID to Update: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(p[i].id == id)
                    {
                        printf("Enter New Price: ");
                        scanf("%f", &p[i].price);

                        printf("Enter New Quantity: ");
                        scanf("%d", &p[i].quantity);

                        printf("Product Updated Successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Product Not Found!\n");
                }

                break;

            case 5:

                for(i = 0; i < n - 1; i++)
                {
                    for(j = i + 1; j < n; j++)
                    {
                        if(p[i].price > p[j].price)
                        {
                            temp = p[i];
                            p[i] = p[j];
                            p[j] = temp;
                        }
                    }
                }

                printf("Products Sorted By Price.\n");
                break;

            case 6:

                total = 0;

                for(i = 0; i < n; i++)
                {
                    total = total + (p[i].price * p[i].quantity);
                }

                printf("Total Inventory Value = %.2f\n", total);

                break;

            case 7:

                printf("Thank You!\n");
                break;

            default:

                printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}