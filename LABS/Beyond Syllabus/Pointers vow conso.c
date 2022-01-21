#include <stdio.h>
void main(){
    char str1[50];
    char *pt;
    int  V,C;
    printf(" Input a string: ");
    fgets(str1, sizeof str1, stdin);
    pt=str1;
    V=C=0;
    while(*pt!='\0')
    {
        if(*pt=='A' ||*pt=='E' ||*pt=='I' ||*pt=='O' ||*pt=='U' ||*pt=='a' ||*pt=='e' ||*pt=='i' ||*pt=='o' ||*pt=='u')
            V++;
        else
            C++;
        pt++;
    }
    printf(" Number of vowels : %d\n Number of consonants : %d\n",V,C-1);
}