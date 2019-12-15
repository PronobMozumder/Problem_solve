#include<stdio.h>
int main()
{
    int n, i , j, k,ara[100][100];

    while(scanf("%d", &n)!= EOF)
    {
        k=n-1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    ara[i][j]=1;
                }
                else
                {
                    ara[i][j]=3;
                }
                if(j==k)
                {
                    ara[i][j]=2;
                }
            }
            k--;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d", ara[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
