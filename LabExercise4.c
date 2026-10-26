/*Question 1

#include <stdio.h>

int main() {

    int val1, val2, sum;

    printf("Enter the first number: ");
    scanf("%d", &val1);

    printf("Enter the second number: ");
    scanf("%d", &val2);

    sum = val1 + val2;

    printf("The sum of %d and %d is %d\n", val1, val2, sum);
}

*/





/*Question 3

#include <stdio.h>
#include <string.h>

int main() {

    printf("=====PARKING FINE RATES=====\n");
    printf("Within 7 days: RM10.00\n");
    printf("Day 8 - Day 14: RM20.00\n");
    printf("After 14 days: RM30.00\n\n\n");


    char fullName[50];
    int offenceDate, paymentDate, daysLate;
    float fineAmount;

    printf("Please enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    strcspn(fullName, "\n"); 

    printf("Please enter the offence date (October 2026):");
    scanf("%d", &offenceDate);

    printf("Please enter the payment date (October 2026):");
    scanf("%d", &paymentDate);

    daysLate = paymentDate - offenceDate;

    if (daysLate <= 7) {
        fineAmount = 10.00;
    } else if (daysLate <= 14) {
        fineAmount = 20.00;
    } else {
        fineAmount = 30.00;
    }

    printf("\n---PARKING FINE RECEIPT---\n");
    printf("Car Owner's Name: %s", fullName);
    printf("Offence Date: %d October 2026\n", offenceDate);
    printf("Payment Date: %d October 2026\n", paymentDate);
    printf("Days between Dates: %d\n", daysLate);
    printf("TotalFine Amount: RM%.2f\n", fineAmount);

}
*/