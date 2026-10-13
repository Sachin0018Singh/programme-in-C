////input 
// print age as input


#include<stdio.h>

 int main() {
     int age;
     printf("enter the age:");
     scanf("%d", &age);
     printf("your age is %d",age);
     return 0;
}


////take two numbers in input and print their sum
#include<stdio.h>

int main(){
    int first_number,second_number;

    printf("enter first number:");
    scanf("%d",&first_number);

    printf("enter second_number:");
    scanf("%d",&second_number);

    int sum = first_number + second_number;

    printf("sum of these number is :%d",sum);
    
    return 0;

}


////compilation 
// A computer program that translate c code into machine code
//// input.c ----> C compiler ----->a.exe(window) 
