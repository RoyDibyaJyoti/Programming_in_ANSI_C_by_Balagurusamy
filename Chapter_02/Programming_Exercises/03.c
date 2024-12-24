/*
    Q. Write a program that prints the even numbers from 1 to 100.
*/

#include<stdio.h>

int main(){
    for(int i = 2; i <= 100; i += 2){
        printf("%5d ", i);
        if (i % 10 == 0){
            printf("\n");
        }
    }
    return 0;
}