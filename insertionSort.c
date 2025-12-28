#include<stdio.h>

int main(){

    int i,j,temp,n;

    printf("enter the array size: ");
    scanf("%d",&n);

    int arr[n];

    printf("enter the array values :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=1;i<n;i++){
        for(j=i;j>=1;j--){
            if(arr[j-1]>arr[j]){
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    printf("the shorted array:\n");
        for(i=0;i<n;i++){
            printf("%d ",arr[i]);
        }

    return 0;
    
}