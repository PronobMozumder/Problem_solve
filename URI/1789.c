#include<stdio.h>
int main()
{
    int n, i, x, ara[500], max;

    while( scanf("%d",&n)!= EOF)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
        }
        max=ara[0];
        for(i=0; i<n; i++)
        {
            if(max<ara[i])
            {
                max=ara[i];
            }
        }
        if(max<10)
        {
            x=1;
        }
        else if(max>=10 && max<20)
        {
            x=2;
        }
        else if(max>=20)
        {
            x=3;
        }

        printf("%d\n",x);
    }

    return 0;
}
