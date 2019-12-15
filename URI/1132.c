#include<stdio.h>
int main()
{
    int i,x,y,sum=0,a,b;

    scanf("%d %d",&x,&y);
    if(x<y)
    {
        a=x;
        b=y;
    }
    else
    {
        a=y;
        b=x;
    }

    for(i=a; i<=b; i++)
    {
        if(i%13!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
