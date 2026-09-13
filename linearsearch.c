#include<stdio.h>
int linear_search(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(void){
    int arr[]={10,25,30,45,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=45;
    int result=linear_search(arr,size,target);
    if(result!=1){
        printf("Value %d found at index %d.\n",target,result);
    }
    else{
        printf("Value %d not found in the array.\n",target);
    }
    return 0;
}