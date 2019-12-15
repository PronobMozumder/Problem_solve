#include<stdio.h>
int main()
{
    int a, n, i,sum=0;

    scanf("%d %d",&a, &n);

    while(1)
    {
        if(n<=0)
        {
            scanf("%d",&n);
        }
        else
        {
             break;
        }

    }
    for(i=a;i<a+n;i++)
    {
        sum+=i;
    }
    printf("%d\n",sum);

    return 0;

}
