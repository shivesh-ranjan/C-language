#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[n-1-i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}