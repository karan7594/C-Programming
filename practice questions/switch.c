#include<stdio.h>

int main(){
    int day;
    printf("enter a number (1 to 7) : ");
    scanf("%d",&day);
    switch(day){
        case 1 : printf("Monday\n");
        if(day==1){
            printf("today fast for shiv ");
        }
        else{
            printf("not!");
        }
        break;
        case 2 : printf("Tuesday");
        break;
        case 3 : printf("Wednesday");
        break;
        case 4 : printf("Thursday");
        break;
        case 5 : printf("Friday");
        break;
        case 6 : printf("Saturday");
        break;
        case 7 : printf("Sunday");
        break;
        default: printf("not valid !");
    }
}