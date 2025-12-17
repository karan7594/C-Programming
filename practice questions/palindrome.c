#include<stdio.h>

int main(){
    int num,reverse=0,original_value_of_user,digit;

    printf("enter the number check the palindrome or not : ");
    scanf("%d",&num);

    original_value_of_user = num;

while(num != 0){
    digit = num % 10;
    reverse = reverse * 10 + digit ;
    num = num / 10;

}

if (original_value_of_user == reverse){
    printf("the number is palindrome number\n");
}
    else{
        printf("the number is not palindrome number\n");
}


return 0;
}



