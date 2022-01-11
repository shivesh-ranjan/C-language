#include <stdio.h>
#include <stdlib.h>

void addm(){
    int arr1[3][3];
    int arr2[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter %d %d element of 1st matrix:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter %d %d element of 2nd matrix:",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("Result:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
}

void subm(){
    int arr1[3][3];
    int arr2[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter %d %d element of 1st matrix:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter %d %d element of 2nd matrix:",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("Result:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr1[i][j]-arr2[i][j]);
        }
        printf("\n");
    }
}

void trianglem(){
    int rows, cols, r, c, matrix[3][3];
    printf("enter the elements for the Matrix: \n");
    for(r = 0; r < 3; r++){
        for(c = 0;c < 3;c++){
            scanf("%d", &matrix[r][c]);
        }
    }
    printf("\n The Lower Triangular Matrix is: ");
    for(r = 0; r < 3; r++){
        printf("\n");
        for(c = 0; c < 3; c++){
            if(r < c){
                printf("%d\t ", matrix[r][c]);
            }
            else{
                printf("0");
                printf("\t");
            }
        }
    }
    printf("\n The Upper Triangular Matrix is: ");
    for(r = 0; r < 3; r++){
        printf("\n");
        for(c = 0; c < 3; c++){
            if(r > c){
                printf("%d\t ", matrix[r][c]);
            }
            else{
                printf("0");
                printf("\t");
            }
        }
    }
}

void transposem(){
    int arr1[3][3];
    int arr2[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter %d %d element:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr2[j][i]=arr1[i][j];
        }
    }
    printf("Results:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
}

void productm(){
    int arr1[3][3], arr2[3][3], ans[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter %d %d element of 1st matrix:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter %d %d element of 2nd matrix:",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("Result:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            ans[i][j] = 0;
            for (int k = 0; k < 3; k++)
                ans[i][j] += arr1[i][k] * arr2[k][j];
                printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
}

int main(){
    printf("MENU (use 3X3 matrices only):\n");
    printf("1. Addition of two matrices\n");
    printf("2. Subtraction of two matrices\n");
    printf("3. Finding upper and lower triangular matrices\n");
    printf("4. Transpose of a matrix\n");
    printf("5. Product of two matrices\n");
    printf("\nEnter your choice:");
    int n;
    scanf("%d",&n);
    if(n==1){
        addm();
    }
    else if(n==2){
        subm();
    }
    else if(n==3){
        trianglem();
    }
    else if(n==4){
        transposem();
    }
    else if(n==5){
        productm();
    }
    else{
        printf("\nEnter valid integer.");
    }
    system("pause");
    return 0;
}
// ©Shivesh