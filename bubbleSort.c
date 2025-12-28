#include<stdio.h>

int main(){

    int i,j,n,temp;
    printf("enter the array size : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the value of array : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=n;i>0;i--){
        for(j=0;j<i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        }

        printf("The shorted array is\n");
        for(i=0;i<n;i++){
            printf("%d ",arr[i]);
    }

    return 0;    

}