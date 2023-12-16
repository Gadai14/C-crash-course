#include<stdio.h>
int main()
{
    int T;
    printf("Test case Enter :");
    scanf("%d",&T);
    while(T>0)
    {
        int N;
        printf("Enter submission of test case:");
        scanf("%d",&N);
        int max_score[11]={0};
        for(int i=0;i<N;i++)
        {
            int p,s;
            printf("Enter the problem statement and score");
            scanf("%d%d",&p,&s);
            p--;
            if(s>max_score[i])
            {
                max_score[p]=s;

            }

        }
    }
        int total_score=0;
        for(int i=0;i<8;i++)
        {
            total_score+=max_score[i];
            printf("%d",total_score);
        }
      
    
      return 0;

}