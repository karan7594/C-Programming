#include<stdio.h>

int main(){

    int x;
    printf("enter the number : ");
    scanf("%d",&x);

    int fact =1;
    for(int i=1;i<=x;i++){
        
        fact =fact*i;
        printf("%d\n",i);
    }
    printf("the factorial of x %d",fact);
    return 0;
}