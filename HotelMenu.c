#include <stdio.h>

int main() {
    int choice, quantity;

    printf("Welcome to the Hotel Menu Card\n");
    printf("1. Veg Section\n");
    printf("2. Non-Veg Section\n");
    printf("3. Sweet Section\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\n--- Veg Section ---\n");
        printf("1. Vegetable Biryani - ?200 per plate\n");
        printf("2. Paneer Tikka - ?180 per plate\n");
        printf("3. Palak Paneer - ?190 per plate\n");
        printf("4. Veg Pulao - ?160 per plate\n");
        printf("5. Aloo Gobi - ?150 per plate\n");
    } else if (choice == 2) {
        printf("\n--- Non-Veg Section ---\n");
        printf("1. Chicken Biryani - ?250 per plate\n");
        printf("2. Tandoori Chicken - ?300 per plate\n");
        printf("3. Butter Chicken - ?280 per plate\n");
        printf("4. Mutton Rogan Josh - ?320 per plate\n");
        printf("5. Fish Curry - ?270 per plate\n");
    } else if (choice == 3) {
        printf("\n--- Sweet Section ---\n");
        printf("1. Gulab Jamun - ?50 per piece\n");
        printf("2. Rasgulla - ?40 per piece\n");
        printf("3. Jalebi - ?60 per piece\n");
        printf("4. Kulfi - ?70 per piece\n");
        printf("5. Rasmalai - ?55 per piece\n");
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    double totalCost = 0.0;

    if (choice >= 1 && choice <= 5) {
        switch (choice) {
            case 1:
                totalCost = quantity * 200.0;
                break;
            case 2:
                totalCost = quantity * 180.0;
                break;
            case 3:
                totalCost = quantity * 190.0;
                break;
            case 4:
                totalCost = quantity * 160.0;
                break;
            case 5:
                totalCost = quantity * 150.0;
                break;
        }

        printf("Total cost: ?%.2f\n", totalCost);
    }

    return 0;
}
