#include<stdio.h>
int main()
{
    int n, i,r;

    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        r=i*n;
        printf("%d x %d = %d\n",i,n,r);
    }
    return 0;
}
