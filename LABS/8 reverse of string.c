#include <stdio.h>
int main ()
{
char str1[25];
int h = 0, temp = 0;
printf("Enter a string -> ");
scanf("%s", &str1);
while (str1[h] != '\0')
{
h++;
}
printf("%d", h);for (int i = 0; i < (h + 1) / 2; i++)
{
temp = str1[i];
str1[i] = str1[h - 1 - i];
str1[h - 1 - i] = temp;
}
printf("\nReversed string is -> %s\n", str1);
return 0;
}
