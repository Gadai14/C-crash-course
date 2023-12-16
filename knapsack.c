
 #include<stdio.h>


    float weight[20],profit[20],ratio[20],capacity;

    int objective[20];
    int i,j;
void  knapsack(int n)
{
    float solution[20],p=0,u;
    int i,k=0;


    u=capacity;

    for(i=0;i<n;i++)
    solution[i]=0.0;
    for(i=0;i<n;i++)
    {
    if(weight[i]>u)
    break;
    else{
        solution[i]=1.0;
        p=p+profit[i];

        u=u-weight[i];
    }
    }
    if(i<n)
    solution[i]=u/weight[i];
    p=p+(solution[i]* profit[i]);

    printf("The result vector is :");
    for(i=0;i<n;i++)
        printf("%f\t",solution[i]);

    printf("maximum profit is: %f",p);
}


int main()
{

   int i,n;
   float temp;
printf("\nEnter the no. of objects:- ");
   scanf("%d", &n);
    printf("Enter the obj:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &objective[i]);

    }
    printf("The objects are:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t", objective[i]);

    }

    printf("Enter the profit:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%f", &profit[i]);

    }
    printf("The profits are:-\n");
    for(i=0;i<n;i++)
    {
        printf("%f\n",profit[i]);

    }

printf("Enter the weight:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%f", &weight[i]);

    }
     printf("The Weights are:-\n");
    for(i=0;i<n;i++)
    {
        printf("%f\n",weight[i]);

    }
    printf("Enter the capacity of the bag:\n");
    scanf("%f",&capacity);
    for(i=0;i<n;i++)
    ratio[i]=profit[i]/weight[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ratio[i]<ratio[j])
            {
                temp=ratio[j];
                ratio[j]=ratio[i];
                ratio[i]=temp;

                temp=objective[j];
                objective[j]=objective[i];
                objective[i]=temp;

                temp=profit[j];
                profit[j]=profit[i];
                profit[i]=temp;

                temp=weight[j];
                weight[j]=weight[i];
                weight[i]=temp;

            }
        }
    }
    knapsack(n);
    return (0);

}



