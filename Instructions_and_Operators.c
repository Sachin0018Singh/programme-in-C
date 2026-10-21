// instructions: 
// instructions are those statement that tell the computer what to do 

// Types of the Instructions 
// 1.Type Decelaration Instructions 
// 2.Arithmetic Instructions 
// 3.Control Insructions

// 1. Type Declaration Instructions :  Declare Variable Before using it 
// #include<stdio.h>
// int main(){
//     int a = 23;
//     int b = a;
//     int c = b*2;
//     int d = 1,e;


//     int x,y,z;
//     x=y=z=2;
//     return 0;
// }

// // 2.Arithmetic Instruction : Use of mathematical operators 
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int a=2, b=3;
//     int sum = a+b;
//     printf("%d",sum);
//     int power = pow(a,b);
//     printf("%d",power);
//     return 0;
// }

// modular Operator(%) : to returns remainders value of the integer
// #include<stdio.h>
// int main(){
//     int a= 12 , b=13;
//     int remainder = a%b ;
//     printf("%d",remainder);
//     return 0;
// }


//// type conversion 
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     printf("%f\n",2.0 * 2);
//     return 0;
// }

// question of type Conversion 
// int a = 1.999999999;
// solution:
// #include<stdio.h>
// int main(){
//     int a = (int)1.999999;
//     printf("%d \n",a);
//     return 0;
// }


//// operator Precedence (precedence is basically priority)
// like 1st: *,/,%
// 2nd: +,-
// 3rd: = (assignment opertor)
// #include<stdio.h>
// int main(){
//     int a = 4 + 9 * 10;
//     printf("%d",a);
//     return 0;
// }

// case : operation of same precedence 
// to solve it here is coming an associative rule:
#include<stdio.h>
int main(){
    int a = 4*5/5*4;
    printf("%d",a);
    return 0;
}
























































