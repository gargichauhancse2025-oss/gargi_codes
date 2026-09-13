#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int choice,element,position,i;
    while(1){
        printf("1-Traversal\n");
        printf("2-Insertion\n");
        printf("3-Deletion\n");
        printf("4-Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                if(size==0)
                    printf("The array is currently empty\n");
                else{
                    printf("Current array: ");
                    for(i=0;i<size;i++){
                        printf("%d",arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 2:
                if(size>=100){
                    printf("Error:Array is full\n");
                    break;
                }
                printf("Enter element to insert: ");
                scanf("%d",&element);
                printf("Enter position: ");
                scanf("%d",&position);
                if(position<1||position>size+1){
                    printf("Invalid position\n");
                }
                else{
                    for(i=size-1;i>=position;i--){
                        arr[i+1]=arr[i];
                    }
                    arr[position-1]=element;
                    size++;
                    printf("Element successfully inserted\n");
                }
                break;
                case 3:
                    if(size==0){
                        printf("Array is empty\n");
                    }
                    else{
                        printf("enter position to delete:");
                        scanf("%d",&position);
                        if(position<1||position>size+1){
                            printf("Invalid position");
                        }
                        else{
                            printf("deleted value: %d\n",arr[position-1]);
                            for(i=position-1;i<size;i++){
                                arr[i]=arr[i+1];
                            }
                            size--;
                        }
                       
                    }
                     break;
                case 4:
                    printf("Exiting application\n");
                    return 0;
                default:
                    printf("Invalid selection\n");
        }
    }
}