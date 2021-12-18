#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c",&ch);
    printf("%c\n",ch);
/*First way to input strings*/
    char s[100];
    scanf(" %[^\n]%*c",&s);
    printf("%s\n", s);
/*Second way to input strings*/
    char scn[100];
    fgets(scn, 100, stdin);
    printf("%s",scn);
    
    return 0;
}
