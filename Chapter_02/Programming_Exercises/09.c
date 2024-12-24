/*
    Q. Write a program to illustrate the use of typedef declaration in a program. 
*/

#include <stdio.h>

typedef int integer;

int main(){
    integer num = 10;

    printf("num = %d\n", num);

    return 0;
}