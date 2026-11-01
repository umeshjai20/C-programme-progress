#include <stdio.h>

/*
int main() {
    int score;
    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    if (score >= 80) {
        printf("Grade: A\n");
    } else if (score >= 70) {
        printf("Grade: B\n");
    } else if (score >= 60) {
        printf("Grade: C\n");
    } else if (score >= 50) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
}
*/

/*
int main() {
    int choice;
    printf("Menu: \n1. Apple\n2. Banana\n3. Orange\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected Apple.\n");
            break;
        case 2:
            printf("You selected Banana.\n");
            break;
        case 3:
            printf("You selected Orange.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
*/




/*
int main() {
    printf("Counting from 1 to 10 using a for loop: \n");

    //Initialization; Condition; Increment
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
*/

/*
int main() {
    int count = 1;

    printf("Printing numbers from 1 to 10 using a while loop: \n");

    //Condition is checked first 
    while (count <= 10) {
        printf("%d", count);
        count++;
    }
    printf("\n");
}
*/





/*
int main() {
    char repeat;

    do {
        //Place the main code you want to report here
        printf("Executing the program task...\n");

        //Ask the user if they want to repeat
        printf("Do you want to repeat the program? (y/n): ");
        scanf(" %c", &repeat); // The space before %c is important to catch the newline character

    } while (repeat == 'y' || repeat == 'Y');
    printf("Program terminated.\n");

}
*/


#include <stdio.h>

int main() {

    char again;

    do{
        int numItems, choice, i;
        double subtotal = 0.0, discountRate = 0.0, discountAmount, finalTotal;
        double paid = 0.0, cash, change;

        printf("\n=====================================\n");
        printf("     WELCOME TO THE SELF-SERVICE KIOSK\n");
        printf("=====================================\n");

        /* Ask for number of items before showing the menu */
        do
        {
            printf("How many items would you like to order? ");
            scanf("%d", &numItems);
            if (numItems < 1)
                printf("Please order at least 1 item.\n");
        } while (numItems < 1);

        /* for loop: iterate exactly numItems times */
        for (i = 1; i <= numItems; i++)
        {
            printf("\n----------- MAIN MENU -----------\n");
            printf("1: Burger  - RM12.00\n");
            printf("2: Pizza   - RM18.00\n");
            printf("3: Salad   - RM9.00\n");
            printf("---------------------------------\n");
            printf("Item %d of %d - Enter your selection: ", i, numItems);
            scanf("%d", &choice);

            /* switch case: add price to subtotal */
            switch (choice)
            {
                case 1:
                    subtotal += 12.00;
                    printf("Burger added.\n");
                    break;
                case 2:
                    subtotal += 18.00;
                    printf("Pizza added.\n");
                    break;
                case 3:
                    subtotal += 9.00;
                    printf("Salad added.\n");
                    break;
                default:
                    printf("Invalid selection! Please choose 1, 2 or 3.\n");
                    i--;   /* repeat this item so the order count stays exact */
                    break;
            }
        }

        /* Multiple if-else: determine discount */
        if (subtotal > 50.0)
            discountRate = 0.15;
        else if (subtotal > 30.0)
            discountRate = 0.10;
        else if (subtotal > 20.0)
            discountRate = 0.05;
        else
            discountRate = 0.0;

        discountAmount = subtotal * discountRate;
        finalTotal = subtotal - discountAmount;

        printf("\n============== BILL ==============\n");
        printf("Subtotal       : RM%.2f\n", subtotal);
        printf("Discount (%.0f%%) : -RM%.2f\n", discountRate * 100, discountAmount);
        printf("Total to pay   : RM%.2f\n", finalTotal);
        printf("==================================\n");

        /* Payment */
        printf("Please insert cash: RM");
        scanf("%lf", &cash);
        paid += cash;

        /* while loop: keep asking until paid >= final total */
        while (paid < finalTotal)
        {
            printf("Insert more cash (still need RM%.2f): RM", finalTotal - paid);
            scanf("%lf", &cash);
            paid += cash;
        }

        change = paid - finalTotal;
        printf("\nPayment received: RM%.2f\n", paid);
        printf("Change          : RM%.2f\n", change);
        printf("Thank you for your order!\n");

        /* End of ordering process: ask to serve another customer */
        printf("\nWould you like to serve another customer? (Y/N): ");
        scanf(" %c", &again);

    } while (again == 'Y' || again == 'y');

    printf("\nKiosk shutting down. Goodbye!\n");
    return 0;
}






















