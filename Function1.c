#include<stdio.h>

void addition(int ,int);
void substraction(int,int);
void multiplication(int,int);
void division(int ,int);

int main()
{
    int a,b,choice;
   printf("1.For Addition of two numbers\n2.For substract two numbers\n3.For multiply of two numbers\n4.For division of two numbers\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:  addition(a,b);
        break;
    case 2 : substraction(a,b);
    break;
    case 3 :multiplication(a,b);
    break;
    case 4 : division(a,b);
    break;

    default:printf("This is the invalid option!!");

        break;
    }
    

}
void addition(int a,int b)
{
    int c;
     printf("Enter first number for addition:\n");
    scanf("%d",&a);
    printf("Enter second number for addition:\n");
    scanf("%d",&b);
    c=a+b;
    printf("The result is:\t%d+%d=%d",a,b,c);
}
void substraction(int a,int b)
{
    int c;
     printf("Enter first number for substract:\n");
    scanf("%d",&a);
    printf("Enter second number for substract:\n");
    scanf("%d",&b);
    c=a-b;
    printf("The result is :\t%d-%d=%d",a,b,c);
}
void multiplication(int a,int b)
{
    int c;
     printf("Enter first number for multiply:\n");
    scanf("%d",&a);
    printf("Enter second number for multiply:\n");
    scanf("%d",&b);
    c=a*b;
    printf("The result is :\t%d*%d=%d",a,b,c);
}
void division(int a,int b)
{
    int c;
     printf("Enter first number for divide:\n");
    scanf("%d",&a);
    printf("Enter second number for divide:\n");
    scanf("%d",&b);
    c=a/b;
    printf("The result is :\t%d/%d=%d",a,b,c);
}