#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of Day:\n");
    scanf("%d",&n);
    printf("Let's say that what is the day name According to the Week list.....\n");
    switch (n)
    {
    case 1:printf("This is ---------------------\tSunday");
        break;
case 2 : printf("So,This is ---------------------\tMonday");
break;
case 3 :printf("So,This is ----------------------\tTuesday");
break;
case 4 : printf("So,This is -------------------\tWendesday");
break;
case 5 :printf("So,This is --------------------\tThursday");
break;
case 6 :printf("So,This is ---------------------\tFriday");
break;
case 7 : printf("So,This is ------------------\tSaturday");
break;

    default:printf("This is Fun day");
        break;
    }
}