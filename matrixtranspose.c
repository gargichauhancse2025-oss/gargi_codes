#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the no. of rows and columns of first matrix: ");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    printf("Enter elements of first matrix:");
    for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int crr[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                crr[j][i]=arr[i][j];
            }
        }
        printf("the transpose is:");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                printf("%d ",crr[i][j]);
            }
            printf("\n");
        }
}