/*
    Q. Write a program to reat the price of an item in decimal form (like 15.95) and print the output in paise (like 1595 paise).
*/

#include<stdio.h>

int main(){
    float price;
    printf("Enter the price of the item: ");
    scanf("%f", &price);
    printf("The price of the item in paise is %d\n", (int)(price * 100));
    return 0;
}