// #include<stdio.h>

// void first_fuction();
// void second_function();

// int main(){
//     first_fuction();
//     second_function();
//     return 0;
// }

// void first_fuction(){
//     printf("helllo\n");
// }

// void second_function(){

//     printf("goood bye\n");
// }






// #include<stdio.h>

// void squre(int a);

// int main(){
//     int n;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     squre(n);

// }

// void squre(int a){
//         int sq= a*a;
//         printf("the square number is %d",sq);
// }




#include<stdio.h>

void square(float a);
void circle(float b);
float rect(float c,float d);
int main(){
    float n,r,l,b;
    printf("enter the length of square is : ");
    scanf("%f",&n);

    square(n);

    printf("enter the radius of circle is : ");
    scanf("%f",&r);

    circle(r);

    printf("enter the lenth : ");
    scanf("%f",&l);
    printf("enter the width : ");
    scanf("%f",&b);

    rect(l,b);



    return 0;
}

void square(float a){
    int sq = 4*a*a;
    printf("the square is : %d\n",sq);
}

void circle(float b){
    float cir = 3.14*b*b;
    printf("the circle area : %f\n",cir);
}

float rect(float c,float d){
    float rec = c*d;
    printf("the rect area : %f\n",rec);
}