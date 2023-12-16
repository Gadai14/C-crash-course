#include<stdio.h>
int main()
{

    int i,n,job[20],deadline[20],profit[20];
    printf("Enter the number of jobs:\n");
    scanf("%d",&n);
    printf("Enter the job sequences:\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&job[i]);
    }
    printf("Enter the  deadline sequences:\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&deadline[i]);
    }
     printf("Enter the  profit sequences:\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&profit[i]);
    }
    printf("\tEnter the job sequences:\n");
    for(i=0;i<n;i++)
    {

        printf("\t%d",job[i]);

    }
    printf("\n\tEnter the  deadline sequences:\n");
    for(i=0;i<n;i++)
    {

        printf("\t%d",deadline[i]);

    }
     printf("\n\tEnter the  profit sequences:\n");
    for(i=0;i<n;i++)
    {

        printf("\t%d",profit[i]);
    }

}
