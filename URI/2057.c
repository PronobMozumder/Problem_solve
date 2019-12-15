#include<stdio.h>
int main()
{
    int lt, tt, tz,s;

    scanf("%d %d %d", &lt, &tt, &tz);

    if(lt == 0)
    {
        lt=24;
    }

    s=lt+tt+tz;

    if(s<24)
    {
        printf("%d\n",s);
    }
    else if(s>24)
    {
        s=24-s;
        if(s<0)
        {

            printf("%d\n",s*-1);
        }
        else
        {
            printf("%d\n",s);
        }
    }
    else
    {
        s=0;
        printf("%d\n",s);
    }

    return 0;
}
