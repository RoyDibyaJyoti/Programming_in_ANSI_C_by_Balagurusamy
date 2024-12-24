/*
    Write program to count and print the number of negative and positive numbers in a given set of numbers. Test your program with a suitable set of numbers. Use scanf() to get the numbers from the user. Reading should be terminated when the user enters 0.
*/

#include <stdio.h>

int main(){
    int num, pos_count = 0, neg_count = 0;

    printf("Enter a set of numbers. Enter 0 to terminate.\n");
    do{
        scanf("%d", &num);
        if(num > 0)
            pos_count++;
        else if(num < 0)
            neg_count++;
    }while(num != 0);

    printf("Number of positive numbers: %d\n", pos_count);
    printf("Number of negative numbers: %d\n", neg_count);

    return 0;
}