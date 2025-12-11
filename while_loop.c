#include<stdio.h>

int main(){

    int x;
    printf("enter the number : ");
    scanf("%d",&x);

    // int i=0;
    // while(i<=x){
    //     printf("%d\n",i);
    //     i++;
    // }


    // for(int i = 0;i<=x;i++){
    //     printf("%d\n",i);
    // }

    int i =0;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=x);

    return 0;
}