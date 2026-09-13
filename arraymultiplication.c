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
     if(n==p){
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                crr[i][j]=0;
                for(int k=0;k<n;k++){
                    crr[i][j]+=arr[i][k]*brr[k][j];
            }
        }
        }
        printf("the multiplication is:");
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d ",crr[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("The multiplication is not possible\n");
    }
}