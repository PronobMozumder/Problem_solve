#include<stdio.h>
int main()
{
    int a=1,b=3,i,j=0,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=a; j<=b; j++)
        {
            printf("%d ",j);
        }
        printf("PUM\n");
a+=4;
b+=4;

    }
    return 0;
}
