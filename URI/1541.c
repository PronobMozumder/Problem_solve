#include<stdio.h>
int main()
{
    float a,b,c,x,y;

    while(1)
    {
        scanf("%f", &a);
        if(a==0)
        {
            break;
        }
        else
        {
            scanf("%f %f", &b, &c);

            x=(a*b/c)*100;
            int y=sqrt(x);
            printf("%d\n",y);
        }
    }
    return 0;
}
