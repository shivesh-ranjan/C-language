#include <stdlib.h>
#include <stdio.h>
int main () { char str [100]; int i; int upper=0, lower=0, num=0,
special=0;
printf("Please enter the string \n"); gets(str);
for(i=0; str[i] != '\0'; i++) { if(str[i]>='A' && str[i]<='Z') { upper+
+;}
else if(str[i]>='a' && str[i]<='z') {lower++;}
else if(str[i]>='1' && str[i]<='9') { num++;}
else {special++;}}
printf("\n Upper case letters: %d", upper);
printf("\n Lower case letters: %d", lower);
printf("\n Numbers: %d",num);
printf("\n Special characters: %d", special);
return 0;}
