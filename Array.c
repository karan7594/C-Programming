#include<stdio.h>

int main(){
    float arr[3];
    
    printf("enter the 3 value of array\n");
    scanf("%f",&arr[0]);
    scanf("%f",&arr[1]);
    scanf("%f",&arr[2]);
    
    printf("total price arr 1 : %f\n",arr[0]+(0.18*arr[0]));
    printf("total price arr 2 : %f\n",arr[1]+(0.18*arr[1]));
    printf("total price arr 3 : %f\n",arr[2]+(0.18*arr[2]));
    return 0;
}