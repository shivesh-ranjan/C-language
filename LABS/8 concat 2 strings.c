#include <stdio.h>
int main (){ char str1[25]; char str2[25]; int k, l;
printf("Enter the first string you want to concatenate -> ");
scanf("%s", &str1);
printf("Enter the second string you want to concatenate -> ");
scanf("%s", &str2);
for (k = 0; str1[k] != '\0'; k++) { }
for (l = 0; str2[l] != '\0'; l++, k++) { str1[k] = str2[l]; }
str1[k] = '\0'; printf("\n%s\n", str1);
return 0;}