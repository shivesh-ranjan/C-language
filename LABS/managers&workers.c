#include <stdio.h>
int main()
{
 char Wname[50], Mname[50];
 int n, m, salary, Salary, i, j;
 printf("Enter the number of Workers:");
 scanf("%d", &n);
 printf("Enter the number of Managers:");
 scanf("%d", &m);
 FILE *fp1, *fp2;
 fp1 = fopen("w.txt", "w");
 fp2 = fopen("m.txt", "w");
 if (fp1 == NULL)
 {
 printf("\n Error");
 }
 if (fp2 == NULL)
 {
 printf("\n Error");
 }
 for (i = 0; i < n; i++)
 {
 printf("\nEnter Worker %d Name:", i + 1);
 scanf("%s", Wname);
 printf("Enter Salary of Worker %d:", i + 1);
 scanf("%d", &salary);
 fprintf(fp1, "\n Worker Name: %s\n Salary : %d\n", Wname,
salary);
 }
 for (j = 0; j < m; j++)
 {
 printf("\nEnter Manager name %d:", j + 1);
 scanf("%s", Mname);
 printf("Enter salary of Manager %d :", j + 1);
 scanf(" %d", &Salary);
 fprintf(fp2, "\n Manager Name: %s\n Salary: %d\n", Mname,
Salary);
 }
 fclose(fp1);
 fclose(fp2);
 return 0;
}