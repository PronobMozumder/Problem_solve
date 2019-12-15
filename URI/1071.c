#include<stdio.h>
int main()
{
    int x,y,i,sum=0,a,b;
    scanf("%d %d", &x, &y);
    if(x>y)
    {
        a=y;
        b=x;
    }
    else
    {
        a=y;
        b=x;
    }
    for(i=a+1; i<b ; i++)
    {
        if(i%2==1 || i%2 == -1)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
