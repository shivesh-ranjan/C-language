#include <stdio.h>
#include<math.h>
int main() {
    
    int a, n, r;
    float tn, sum = 0;
    
    printf(" Enter the first number of GP:  ");
    scanf("%d", &a);
    printf(" Enter total numbers in GP:  ");
    scanf("%d", &n);
    printf("Enter the common ratio:  ");
    scanf("%d", &r);
    
    sum = (a * (1 - pow(r, n ))) / (1- r);
    tn = a * (pow(r, n - 1));
    
    printf("\n The Sum of Geometric Progression Series =  %.2f", sum);
    printf("\n The tn Term of Geometric Progression Series = %.2f \n", tn);
    return 0;
}