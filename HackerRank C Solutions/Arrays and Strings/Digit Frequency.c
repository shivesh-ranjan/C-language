#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];
    int a[10],x;
    scanf("%s",s);
    for(int i=0;i<10;i++)
     a[i]=0;
    for(int i=0;s[i];i++)
    {
        x=s[i];
        //ascii value of 0 is 48 & of 9 is 57
        if(x>=48&&x<=57)
        {
            a[x-48]++;
        }
    }
    for(int i=0;i<=9;i++)
      printf("%d ",a[i]);
    
    return 0;
}