#include <stdio.h>

void activitySelection(int start[], int finish[], int n)
{
    int i, j;
printf("The activities are:\n");
    i = 0;

          printf("%d\t",i);

    for (j = 1; j < n; j++) {
        if (start[j] >= finish[i]) {

            printf("%d\t", j);
            i = j;
        }
    }
}

int main()
{
    int n, i;

    printf("Enter the number of activities: ");
    scanf("%d", &n);

    int start[n], finish[n];

    printf("Enter the start time:\n");
    for (i = 0; i < n; i++) {
    scanf("%d",&start[i]);
    }
    printf("Enter the finish time:\n");
    for (i = 0; i < n; i++) {
    scanf("%d",&finish[i]);
    }
    printf("The start time is :\n");
    for (i = 0; i < n; i++) {
    printf("%d\t",start[i]);
    }
    printf("\nThe finish time is:\n");
    for (i = 0; i < n; i++) {
    printf("%d\t",finish[i]);
    }

   
    activitySelection(start, finish, n);

}

