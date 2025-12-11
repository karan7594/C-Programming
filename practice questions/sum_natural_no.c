#include<stdio.h>

int main(){
    
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    int sum =0;
    for(int i=0;i<=n;i++){
        
        sum = sum+i;
        printf("%d\n",sum);

    }


    printf("reverse the natural number \n");

    int i=n;
    do{
        printf("%d\n",i);
        i--;
    }while(i>=1);


    return 0;
}