
//continue the condition 

#include<stdio.h

int main(){

    for(int i =1; i<=10;i++){
        if(i==6){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}


//break the condition

#include<stdio.h>

int main(){

    for(int i =1; i<=10;i++){
        if(i==6){
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}