#include<stdio.h>
void printPattern(int n){
	int i = 1;
	int cur = 0;
	for (int i = 1; i <= n; ){
		if (cur < i){
    		printf("* ");
    		cur++;
    		continue;
		}
		if (cur == i){
    		printf("\n");
    		i++;
    		cur = 0;
		}
	}
}
int main(){
    int n;
    scanf("%d", &n);
	printPattern(n);
	return 0;
}
