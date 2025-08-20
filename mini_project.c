#include <stdio.h>

int main()
{
    int bill = 0, order, qt, input;

    printf("Welcome to 'Burger Singh'!\n");
    printf("We'll provide you the best burger & service from anywhere!\n");
    printf("Please relax and check out our menu:\n");

    do
    {
        printf("\nMenu:\n");
        printf("1. Veg Burger (Plain) .......... Rs.100\n");
        printf("2. Burger Maha One (Paneer, butter etc.) .......... Rs.150\n");
        printf("3. Paneer (Plain) .......... Rs.125\n");
        printf("4. Non-Veg (Only egg) .......... Rs.150\n");
        printf("5. Non-Veg (Meat Only) .......... Rs.200\n");
        printf("6. Non-Veg (Maha) .......... Rs.250\n");

        printf("\nEnter your choice (1-6): ");
        scanf("%d", &order);
        printf("Enter quantity: ");
        scanf("%d", &qt);

        switch (order)
        {
        case 1:
            bill = qt * 100;
            printf("You ordered %d Veg Burger(s): Rs.%d\n", qt, bill);
            break;
        case 2:
            bill = qt * 150;
            printf("You ordered %d Burger Maha One(s): Rs.%d\n", qt, bill);
            break;
        case 3:
            bill = qt * 125;
            printf("You ordered %d Paneer (Plain): Rs.%d\n", qt, bill);
            break;
        case 4:
            bill = qt * 150;
            printf("You ordered %d Non-Veg (Egg): Rs.%d\n", qt, bill);
            break;
        case 5:
            bill = qt * 200;
            printf("You ordered %d Non-Veg (Meat): Rs.%d\n", qt, bill);
            break;
        case 6:
            bill = qt * 250;
            printf("You ordered %d Non-Veg (Maha): Rs.%d\n", qt, bill);
            break;
        default:
            printf("Invalid choice. Please select a valid item.\n");
            break;
        }

        printf("\nDo you want to order more? (1 = Yes, 2 = No): ");
        scanf("%d", &input);

    } while (input == 1);

    printf("\nThank you! Visit us again!\n");
    return 0;
}
