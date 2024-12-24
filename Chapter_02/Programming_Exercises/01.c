/*
    Q. Write a program to determine and print the sum of the following harmonic series for a given value of n:
        1 + 1/2 + 1/3 + 1/4 + ... + 1/n
*/

#include<stdio.h>

int main(){
    int n;
    float sum = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        sum += 1.0 / i;
    }
    printf("The sum of the harmonic series for n = %d is %f\n", n, sum);
    return 0;
}