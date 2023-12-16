#include<stdio.h>
#define max 5
int main()
{
    int arr[max],i,n,x;
    printf("Enter the no of elements :\n");
    scanf("%d",&n);
    printf("Enter array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the item to be searched :\n");
    scanf("%d",&x);

    int result = binarysearch(arr,n,x);
    printf("the elements %d is found %d location",x,result);
    return 0;

}
int binarysearch(int arr[],int n,int x)
{
    int low,mid,high;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==x){
        return mid;
        }
        if(arr[mid]<x)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

return -1;
}

    
