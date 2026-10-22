#include <stdio.h>

// Main Function
int main() {
    printf("Welcome to Chunky Burgers !\n");
    printf("We are a fast food restaurant that specializes in burgers and chicken tenders.\n");
    printf("The following is our menu:\n");
    printf(" 1. Chunky Classic Burger - RM4.50\n 2. Chunky Cheeseburger - RM6.00\n 3. Chunky Crispy Chicken Burger - RM7.50\n 4. Chunky Chicken Tenders - RM5.50\n");

//Initialize variable types
    int quantity1;
    int quantity2;
    int quantity3;
    int quantity4;

//Prompt user for quantity of each item
    printf("Please enter the quantity for Chunky Classic Burger (0 if not ordering):\n ");
    scanf("%d", &quantity1);

    printf("Please enter the quantity for Chunky Cheeseburger (0 if not ordering):\n ");
    scanf("%d", &quantity2);

    printf("Please enter the quantity for Chunky Crispy Chicken Burger (0 if not ordering):\n ");
    scanf("%d", &quantity3);

    printf("Please enter the quantity for Chunky Chicken Tenders (0 if not ordering):\n ");
    scanf("%d", &quantity4);

//Initialize variable types  
    float total1;
    float total2;
    float total3;
    float total4;
    float grandTotal;

//Calculate total for each item  
    total1 = quantity1 * 4.50;
    total2 = quantity2 * 6.00;
    total3 = quantity3 * 7.50;
    total4 = quantity4 * 5.50;

//Calculate grand total for all items
    grandTotal = total1 + total2 + total3 + total4;

//Print receipt
    printf("\n========== CHUNKY BURGERS RECEIPT ==========\n");
    printf("Chunky Classic Burger       x %d = RM%.2f\n", quantity1, total1);
    printf("Chunky Cheeseburger         x %d = RM%.2f\n", quantity2, total2);
    printf("Chunky Crispy Chicken Burger x %d = RM%.2f\n", quantity3, total3);
    printf("Chunky Chicken Tenders      x %d = RM%.2f\n", quantity4, total4);
    printf("--------------------------------------------\n");
    printf("Grand Total: RM%.2f\n", grandTotal);
    printf("============================================\n");
    printf("Thank you for ordering at Chunky Burgers!\n");

    return 0;
}