// // practise question 01 (APNACOLEGE) calculate the area of square
// #include<stdio.h>
// int main (){
//     int side = 12;
//     int area = side * side;
//     printf("area ofsquare %d",area);
//     return 0;
// }


//// give three number as input and print the sum of three number (Lab question 01)
// #include<stdio.h>

// int main(){
//     int first_number,second_number,third_number;

//     printf("enter first number:");
//     scanf("%d",&first_number);

//     printf("enter second number:");
//     scanf("%d",&second_number);

//     printf("enter third number:");
//     scanf("%d",&third_number);

//     int sum =first_number+second_number+third_number;
//     printf("sum of three number is %d"/n,sum);
//     return 0;
// }


// // write an alogarithm to check whether number is even or odd 
// #include<stdio.h>
// int main (){
//     int number1;

//     printf("enter the number:");
//     if number1 % 2 == 0;
//     printf("numer1 is even");
//     else ;
//     printf("number1 is odd");
//     return 0;
// }


// questions of the associativity rule : 
//  5*2-2*3
//  5*2/2*3
//  5*(2/2)*3
//  5+2/2*3

#include<stdio.h>
int main()
{
    int a = 5*2-2*3;
    int b = 5*2/2*3;
    int c = 5*(2/2)*3;
    int d = 5+2/2*3;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
}