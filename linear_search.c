#include<stdio.h>
#define max 10
int linearsearch(int arr[max],int x,int n)
{
    for(int i =0;i<n;i++)
    {
        if(arr[i]==x)
        {
        return i;
        }
        
    }
    return -1;
}
int main()
{
    int arr[max],n,i,x,ls;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    printf("The elements are :");
        for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
        
    }
    printf("\nEnter the element to search in the array :\n");
    scanf("%d",&x);
    ls=linearsearch(arr,x,n);
    printf("Item found at %d location",ls);
    return 0;
}