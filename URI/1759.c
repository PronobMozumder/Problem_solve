#include<stdio.h>
int main()
{
    int i, n;

    scanf("%d", &n);
    printf("Ho");
    for(i=2;i<=n;i++)
    {
        printf(" Ho");

        if(i==n)
        {
            printf("!\n");

        }
    }
    return 0;
}
