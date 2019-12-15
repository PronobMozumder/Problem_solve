#include<stdio.h>
int main()
{
    int m=0,x,y,i,j=0;
    float max=0.0,ara[1000],a,b;

    scanf("%d",&i);
    {
        while(i--)
        {
            while(scanf("%d %d", &x, &y)!=EOF);
            {
                a=(x*y);
                b=(y*100);
                ara[j]=(a/b);
                j++;
            }

        }

        max=ara[0];
        for(i=0; i<j; i++)
        {
            if(max<ara[i])
            {
                max=ara[i];
            }
        }

        printf("%.4f\n", max);
    }


    return 0;
}
