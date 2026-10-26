#include <stdio.h> 

int main() {

    printf("Hello !\n Welcome to the Cone Volume Caluclator !!\n");

    float radius, height, volume, pi;
    pi = 3.142;

    printf("Please enter the radius of the cone: \n");
    scanf("%f", &radius);

    printf("Please enter the height of the cone: \n");
    scanf("%f", &height);

    volume = (pi * radius * radius * height) / 3;

    printf("The volume of the cone is: %.2f \n", volume);

}




