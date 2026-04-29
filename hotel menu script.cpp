#include <stdio.h>
int main() 
{
int choice, quantity;

    printf("Welcome to the Hotel Menu Card\n");
    printf("1. Veg Section\n");
    printf("2. Non-Veg Section\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        printf("\n--- Veg Section ---\n");
        printf("1. Vegetable Biryani - ?200 per plate\n");
        printf("2. Paneer Tikka - ?180 per plate\n");
        printf("3. Palak Paneer - ?190 per plate\n");
        printf("4. Veg Pulao - ?160 per plate\n");
        printf("5. Aloo Gobi - ?150 per plate\n");

        printf("Enter the quantity for your chosen dish (1 to 5): ");
        scanf("%d", &quantity);

        switch (quantity)
        {
            case 1:
                printf("Total Amount For Pay: ?200\n");
                break;
            case 2:
                printf("Total Amount For Pay: ?360\n");
                break;
            case 3:
                printf("Total Amount For Pay: ?570\n");
                break;
            case 4:
                printf("Total Amount For Pay: ?640\n");
                break;
            case 5:
                printf("Total Amount For Pay: ?750\n");
                break;
            default:
                printf("Invalid choice!\n");
                
        }
    } 
    else if (choice == 2) 
    {
        printf("\n--- Non-Veg Section ---\n");
        printf("1. Chicken Biryani - ?250 per plate\n");
        printf("2. Tandoori Chicken - ?300 per plate\n");
        printf("3. Butter Chicken - ?280 per plate\n");
        printf("4. Mutton Rogan Josh - ?320 per plate\n");
        printf("5. Fish Curry - ?270 per plate\n");

        printf("Enter the quantity for your chosen dish (1 to 5): ");
        scanf("%d", &quantity);

        switch (quantity) {
            case 1:
                printf("Total Amount For Pay: ?250\n");
                break;
            case 2:
                printf("Total Amount For Pay: ?600\n");
                break;
            case 3:
                printf("Total Amount For Pay: ?840\n");
                break;
            case 4:
                printf("Total Amount For Pay: ?1280\n");
                break;
            case 5:
                printf("Total Amount For Pay: ?1350\n");
                break;
            default:
                printf("Invalid choice!\n");
                return 1;
        }
    } else {
        printf("Invalid choice!\n");
       
    }

int sweetChoice, sweetQuantity;
    printf("\nWould you like to have a sweet dish? (1 for Yes, 0 for No): ");
    scanf("%d", &sweetChoice);


    if (sweetChoice == 1) {
        printf("\n--- Sweet Corner ---\n");
        printf("1. Gulab Jamun - ?30 per piece\n");
        printf("2. Rasgulla - ?20 per piece\n");
        printf("3. Rasmalai - ?40 per piece\n");
        printf("Enter the quantity for your chosen sweet dish (1 to 3): ");
        scanf("%d", &sweetQuantity);

        switch (sweetQuantity) {
            case 1:
                printf("Total Amount For Pay: ?30\n");
                break;
            case 2:
                printf("Total Amount For Pay: ?40\n");
                break;
            case 3:
                printf("Total Amount For Pay: ?120\n");
                break;
            default:
                printf("Invalid choice!\n");
                return 0;
        }
    } else if (sweetChoice != 0) {
        printf("Invalid choice!\n");
       
        
    }

 
}
