#include<stdio.h>
#include<conio.h>
int main(){
    float num1,num2, result;
    char oper;

    printf("Enter the first number:");
    scanf("%f",&num1);
    printf("Enter the operation:");
    scanf(" %c",&oper);
    printf("Enter the second number:");
    scanf("%f",&num2);


    switch(oper)
    {
        case'-':
        result=num1-num2;
        printf("%f",result);
        break;

        case'+':
        result=num1+num2;
        printf("%f",result);
        break;

        case'*':
        result=num1*num2;
        printf("%f",result);
        break;

        case'/':
        result=num1/num2;
        printf("%f",result);
        break;
        
        default:
        printf("The operation is not valid");

    }
    return 0;



}