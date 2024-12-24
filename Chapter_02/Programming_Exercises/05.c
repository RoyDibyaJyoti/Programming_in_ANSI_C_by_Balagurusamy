/*
    Q. the price of one kg of rice is Rs. 16.75 and one kg of sugar is Rs. 15.00. Write a program to get these values from the user and display the prices in the following format:

    ***LIST OF PRICES***
    Item            Price
    Rice            Rs. 16.75
    Sugar           Rs. 15.00
*/

#include <stdio.h>

int main(){
    float rice_price, sugar_price;

    printf("Enter the price of one kg of rice: ");
    scanf("%f", &rice_price);
    printf("Enter the price of one kg of sugar: ");
    scanf("%f", &sugar_price);

    printf("\n***LIST OF PRICES***\n");
    printf("Item\t\tPrice\n");
    printf("Rice\t\tRs. %.2f\n", rice_price);
    printf("Sugar\t\tRs. %.2f\n", sugar_price);

    return 0;
}