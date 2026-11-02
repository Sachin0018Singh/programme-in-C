////input 
// print age as input


// #include<stdio.h>

//  int main() {
//      int age;
//      printf("enter the age:");
//      scanf("%d", &age);
//      printf("your age is %d",age);
//      return 0;
// }


// ////take two numbers in input and print their sum
// #include<stdio.h>

// int main(){
//     int first_number,second_number;

//     printf("enter first number:");
//     scanf("%d",&first_number);

//     printf("enter second_number:");
//     scanf("%d",&second_number);

//     int sum = first_number + second_number;

//     printf("sum of these number is :%d",sum);
    
//     return 0;

// }


////compilation 
// A computer program that translate c code into machine code
//// input.c ----> C compiler ----->a.exe(window) 

#include <stdio.h>

int main() {
    int days, years, weeks, remainingDays;

    // Input
    days = 1000;

    // Calculate years
    years = days / 365;
    remainingDays = days % 365;

    // Calculate weeks
    weeks = remainingDays / 7;

    // Calculate remaining days
    remainingDays = remainingDays % 7;

    // Output
    printf("Total Days = %d\n", days);
    printf("Years = %d\n", years);
    printf("Weeks = %d\n", weeks);
    printf("Days = %d\n", remainingDays);

    return 0;
}