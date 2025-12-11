#include<stdio.h>

int main(){
    int age; 
    printf("enter ege of person : ");
    scanf("%d",&age);
    if(age>=18 && age<90){
        printf("you can vote ! ");
    }
    else if(age>=90){
        printf("you can not vote ! ");
    }
    else{
        printf("you can not eligible ");
    }
    return 0 ;

}