#include<stdio.h>
int logN(int num,int base){
      if(num<base)
           return 0;
     return 1 + logN(num/base,base);
}
int log2(int num){
      if(num==1)
           return 0;
      return 1 + log2(num/2);
}
int main(){
        int num, base;
        printf("Enter number for Base-2 logarithm:");
        scanf("%d",&num);
        printf("\nValue of log base 2 of %d = %d\n",num,log2(num));
        printf("\nEnter any number:");
        scanf("%d",&num);
        printf("Enter base to %d:",num);
        scanf("%d",&base);
        printf("\nValue of log base %d of %d = %d\n",base,num,logN(num,base));
        return 0;
}