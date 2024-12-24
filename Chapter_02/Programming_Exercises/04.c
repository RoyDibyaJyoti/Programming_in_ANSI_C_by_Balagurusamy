/*
    Q. Write a program that requests two float type numbers from the user and then divides the first number by the second and displays the result along with the numbers. The program should continue as long as the user enters non-zero values for the second number.
*/

#include <stdio.h>

int main(){
    float num1, num2;
    printf("Enter two float type numbers: ");
    while(scanf("%f %f", &num1, &num2) == 2){
        if(num2 == 0){
            printf("Division by zero is not allowed.\n");
            continue;
        }
        printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        printf("Enter two float type numbers: ");
    }
    return 0;
}