#include<stdio.h>
int main()
{
    int tt, i, count=0,c[5];

     scanf("%d", &tt);
    for(i=0;i<5;i++)
    {
        scanf("%d", &c[i]);
    }

    for(i=0;i<5;i++)
    {
        if(c[i]==tt)
        {
            count++;
        }
    }

    printf("%d\n",count);
    return 0;
}
