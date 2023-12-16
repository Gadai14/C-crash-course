#include<stdio.h>
int main()
{
    int i,n,m,result;
    printf("Enter a number to print that number's multiplication table :\n");
    scanf("%d",&n);
    printf("Enter a range to print that multiplication table:\n");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        result=n*i;
        printf("%d * %d == \t%d\n",n,i,result);

    }

}