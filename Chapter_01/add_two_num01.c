/*

    The following program adds two numbers and displays the result. The program uses two variables, number and amount, to store the two numbers. The program then adds the two numbers and stores the result in the variable amount. The program then displays the two numbers and the result.

*/

#include<stdio.h>

int main(){
    int number;
    float amount;

    number = 100;
    amount = 30.75 + 75.35;

    printf("The number is %d\n", number);
    printf("The amount is %5.2f\n", amount);
}