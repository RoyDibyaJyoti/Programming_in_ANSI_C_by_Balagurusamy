/*--------------INVESTMENT PROBLEM----------------*/
#include <stdio.h>
#define PERIOD 10
#define PRINCIPAL 5000.00

/*--------------MAIN PROGRAM BEGINS---------------*/
int main(){
    int year;
    float amount, value, inrate;

    amount = PRINCIPAL;
    inrate = 0.11;
    year = 0;

    printf("Year    Amount\n");
    while(year <= PERIOD){
        printf("%2d   %8.2f\n", year, amount);
        value = amount + (inrate * amount);
        year = year + 1;
        amount = value;
    }
    return 0;
}