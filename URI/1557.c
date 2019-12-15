#include<stdio.h>
int main()
{
    int n,a=1, i, j;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("%d",a);
        for(j=2; j<=n; j++)
        {
            a=a+a;
            printf(" %d",a);
        }
        printf("\n");
    }

}
