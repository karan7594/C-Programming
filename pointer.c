#include<stdio.h>

int sum(int a,int b,int *s,int *m,int *avg);

int main(){
    int a = 4,b=2;
    int s,m,avg;
    sum(a,b,&s,&m,&avg);
    printf("sum = %d ,multiple = %d ,average = %d ",s,m,avg);

    return 0;
}

int sum(int a,int b,int *s,int *m,int *avg){
    *s = a+b;
    *m = a*b;
    *avg = a+b/2;
    }
