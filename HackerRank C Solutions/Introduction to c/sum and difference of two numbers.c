#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num1,num2;
    float num3,num4;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("\n");
    scanf("%f",&num3);
    scanf("%f",&num4);
    printf("%d",num1+num2);
    printf(" %d\n",num1-num2);
    /*scaling 1 decimal place to float using .1 before f*/
    printf("%.1f",num3+num4);
    printf(" %.1f",num3-num4);
    
    return 0;
}