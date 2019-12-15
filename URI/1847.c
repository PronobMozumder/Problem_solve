#include<stdio.h>
int main()
{
    int a, b, c, x, x1,y, y1;

    while(scanf("%d", &a)!= EOF)
    {
        scanf("%d %d",&b, &c);

    x = a-b;
    y = b-c;
    x1=c-b;
    y1=b-a;

    if(a>b && b<=c)
    {
        printf(":)\n");
    }
    else if(a<b && b>=c)
    {
        printf(":(\n");
    }
    else if(a<b && b<c)
    {
        if(y1 > x1)
        {
            printf(":(\n");
        }
        else if(y1<=x1)
        {
            printf(":)\n");
        }
    }
    else if(a>b && b>c)
    {
        if(x>y)
        {
            printf(":)\n");
        }
        else if(x<=y)
        {
            printf(":(\n");
        }
    }
    else if(a==b)
    {
        if(b<c)
        {
            printf(":)\n");
        }
        else
        {
            printf(":(\n");
        }
    }


    }
   return 0;
}
