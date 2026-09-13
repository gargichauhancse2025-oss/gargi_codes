#include<stdio.h>
int linearsearch( int arr[],int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]= {10,35,15,84,60,22};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 84;
    int result = linearsearch(arr, size, target);
    if(result!=1){
        printf("The element found at position %d",result);
    }
    else{
        printf("Element not found");
    }
}