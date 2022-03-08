#include <stdio.h>
int main ()
{ char str1[25]; char str2[25]; int h = 0;
printf("Enter a string -> "); scanf("%s", &str1);
while (str1[h] != '\0') { h++; }
printf("%d", h);
for (int i = 0; i < h + 1; i++) { if (str1[i] != '\0') {
str2[i] = str1[i]; } }
printf("\ncopied str1 to str2 -> %s\n", str2);
return 0;}