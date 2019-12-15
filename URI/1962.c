#include<stdio.h>
int main()
{
    int i,t,n,r;
    scanf("%d", &t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(n>2014)
        {
            r=n-2014;
            printf("%d A.C.\n",r);
        }
        else
        {
            r=2015-n;
            printf("%d D.C.\n",r);
        }
    }
    return 0;
}
