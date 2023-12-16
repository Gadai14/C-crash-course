#include<stdio.h>
void lcm (int ,int);
void hcf(int ,int);
int main()
{
    int x,y,choice;
    printf("Enter the first number:\n");
    scanf("%d",&x);
    printf("Enter the second number :\n");
    scanf("%d",&y);
    printf("1.LCM\n2.HCF \nEnter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1: lcm(x,y);
        break;
    case 2 : hcf(x,y);
    break;

    default:printf("wrong choice!!");

        break;
    }


}

void lcm(int x,int y)
{
    int result,i;
    result=(x>y)?x:y;

    for(i=0;i<result;i++)
    {
    if((result%x==0)&&(result%y==0))
    {
        printf("The lcm of two number  %d and %d is %d",x,y,result);
        break;
    }
    }

}
void hcf(int x ,int y)
{
    int result,hf=1,i;
    result=(x<y)?x:y;
    for(i=1;i<=result;i++)
    {
        if((x%i==0) && (y%i==0))
        {
            hf=i;
        
        }
         
    }
    printf("The hcf of two number %d and %d is   ::::\t %d\n",x,y,hf);
}