#include <stdio.h>
double cube(double num){
    return (num * num * num);
}
int main(){
    int num;
    double c;
    printf("Enter any number: ");
    scanf("%d", &num);
    
    c = cube(num);

    printf("\nCube of %d is %.2f", num, c); 
    
    return 0;
}