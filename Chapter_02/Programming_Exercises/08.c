/*
    Q. Write a program to read two floating point numbers using a scanf() statement, assign their sum to an integer variable and then output the values of all three variables.
*/

#include <stdio.h>

int main(){
    float num1, num2;
    int sum;

    printf("Enter two floating point numbers: ");
    scanf("%f %f", &num1, &num2);

    sum = num1 + num2;

    printf("num1 = %.2f\n", num1);
    printf("num2 = %.2f\n", num2);
    printf("sum = %d\n", sum);

    return 0;
}