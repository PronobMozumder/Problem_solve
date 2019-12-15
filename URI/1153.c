#include<stdio.h>
int main()
{
    int i,n,mul=1;

    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        mul*=i;
    }
    printf("%d\n",mul);
    return 0;
}
