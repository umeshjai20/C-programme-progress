/* Question 1 A
#include <stdio.h> 


int main() {

    printf("Hello !\n Welcome to the Cone Volume Calculator !!\n");

    float radius, height, volume, pi;
    pi = 3.142;

    printf("Please enter the radius of the cone: \n");
    scanf("%f", &radius);

    printf("Please enter the height of the cone: \n");
    scanf("%f", &height);

    volume = (pi * radius * radius * height) / 3;

    printf("The volume of the cone is: %.2f \n", volume);

}
*/





/* Question 1 B
#include <stdio.h>
#include <string.h>

int main() {
    printf("Welcome to the supermarket payment system !!!");

    char name[50];
    float price;
    int quantity;
    float subTotal;
    float discount;
    float finalPayment;

    printf("Please enter your full name: \n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; 

    printf("Please enter the price of the item: \nRM");
    scanf("%f", &price);

    printf("Please enter the quantity of the item: \n");
    scanf("%d", &quantity);

    subTotal = price * quantity;
    discount = subTotal * 0.05;
    finalPayment = subTotal - discount;

    printf("\n\n\n");
    printf("Customer Name: %s", name);
    printf("Price of Item: RM%.2f\n", price);
    printf("Quantity of Item: %d\n", quantity);
    printf("Subtotal: RM%.2f\n", subTotal);
    printf("Discount (5%%): RM%.2f\n", discount);
    printf("Final Payment: RM%.2f\n", finalPayment);

}

*/





/* Question 2
#include <stdio.h> 
#include <string.h>

int main() {
    
    printf("Hello Beloved Student !\nI am going to record your personal details now :) \n");

    char name[50];
    char matricNumber[20];
    int age;
    char programme[50];
    char phoneNumber[20];
    
    printf("Please enter your name: \n");
    fgets(name, sizeof(name), stdin);
    strcspn(name, "\n");

    printf("Please enter your Matric Number: \n");
    scanf("%19s", &matricNumber);

    printf("Please enter your age: \n");
    scanf("%d", &age);
    getchar();

    printf("Please enter your programme: \n");
    fgets(programme, sizeof(programme), stdin);
    strcspn(programme, "\n");

    printf("Please enter your phone number: \n");
    scanf("%19s", &phoneNumber );

    printf("\n\n\n");
    printf("Your personal details are as follows: \n\n");
    printf("Name: %s", name);
    printf("Matric Number: %s\n", matricNumber);
    printf("Age: %d\n", age);
    printf("Programme: %s", programme);
    printf("Phone Number: %s", phoneNumber);

}
*/






