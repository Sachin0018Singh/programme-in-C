# C-language 

it is the example of the for loop and use of Break
#include<stdio.h>
int main(){
    int i;
    printf("enter the number:");
    scanf("%d",&i);
    
    for(; i<=10;i++)
    {
    if (i==4)
    {
        break;
    }
        printf("%d\n",i);
}
    return 0;   
}
