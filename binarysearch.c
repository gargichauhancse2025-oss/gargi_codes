#include<stdio.h>
int binary_search(int arr[], int x, int low, int high){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(x>arr[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main(void){
    int arr[]={3,9,45,56};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=45;
    int result=binary_search(arr,x,0,n-1);
    if(result==-1)
        printf("Element is not present in the array.\n");
    else    
        printf("Elememt is found at index %d.\n",result);
    return 0;

}