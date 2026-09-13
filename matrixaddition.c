#include<stdio.h>
int main(){
    int m,n,p,q;
    printf("Enter the no. of rows and columns of first matrix: ");
    scanf("%d %d",&m,&n);
    printf("Enter the no. of rows and columns of second matrix: ");
    scanf("%d %d",&p,&q);
    int arr[m][n];
    printf("Enter elements of first matrix:");
    for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
            
            scanf("%d",&arr[i][j]);
        }
       
    }
    
    int brr[p][q];
    printf("Enter elements of second matrix:");
    for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                scanf("%d",&brr[i][j]);
            }
            
        }
    int crr[m][q];
     if(m==p&&n==q){
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                crr[i][j]=arr[i][j]+brr[i][j];
            }
        }
        printf("the addition is:");
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d ",crr[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("The addition is not possible\n");
    }
}