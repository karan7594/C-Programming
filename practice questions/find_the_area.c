#include<stdio.h>

int main(){
    int r ;
    float pi = 3.14;
    printf("enter radius of circle : ");
    scanf("%d",&r);
    float area = pi * r * r;
    printf("the area of circle %f",area);
    return 0 ;
}