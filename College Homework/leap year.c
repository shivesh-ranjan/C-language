#include <stdio.h>
#include <stdbool.h>
bool checkYear(int year){
	if (year % 400 == 0)
		return true;
	if (year % 100 == 0)
		return false;
	if (year % 4 == 0)
		return true;
	return false;
}
int main(){
	int year;
	scanf("%d",&year);
  	bool ans=checkYear(year);
  	if(ans==true){
      	printf("Leap Year");
    }
  	else{
      	printf("Not a leap year");
    }
	return 0;
}
