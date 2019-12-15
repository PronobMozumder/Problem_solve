#include<stdio.h>

int main()
{
    int i,j;
    float x,y;
    for(x=0; x<2.1; x+=0.2)
    {
        for(y=1; y<=3.0; y++)
        {
            if(x>0 && x<1 || x>1 && x<2)
            {
                printf("I=%.1f J=%.1f\n",x,x+y);
            }
            else
            {
                i=x;
                j=x+y;
                printf("I=%d J=%d\n",i,j);
            }
        }
    }

    return 0;
}
