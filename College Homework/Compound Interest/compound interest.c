#include <stdio.h>
#include <math.h>

int main(){
    float principle, rate, year, CI;
    printf("Enter Principle:\n");
    scanf("%f", &principle);
    printf("Enter no. of Years:\n");
    scanf("%f", &year);
    printf("Enter Interest Rate(per year):\n");
    scanf("%f", &rate);

    CI = principle* (pow((1 + rate / 100), year));

    printf("Compound Interest = %f", CI);

    return 0;
}