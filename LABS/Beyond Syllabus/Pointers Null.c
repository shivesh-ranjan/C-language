#include <stdio.h>
void main(void) {
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	int *ptr = &num;
	if(ptr == 0){
		printf("ptr: already NULL\n");
		return;
	}
	else
		printf("ptr: NOT NULL\n");
	printf("Doing ptr = 0\n");
	ptr = 0;
	printf("Result\n");
	if(ptr == 0)
		printf("ptr: NULL\n");
	else
		printf("ptr: NOT NULL\n");
}