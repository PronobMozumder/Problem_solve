#include<stdio.h>
int main()
{
    int n,i,j,a,b,x,y,sum=0;

    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d", &x,&y);
        if(x!=y)
        {
            if(x>y)
            {
                a=y+1;
                b=x;
            }
            else if(x<y)
            {
                a=x+1;
                b=y;
            }
        }
        else if(a==b)
        {
            printf("0\n");
        }
         else
            {
                printf("0\n");
            }
          sum=0;
        for(j=a; j<b; j++)
        {
            if(j%2 == 1)
            {
                sum=sum+j;
            }
        }
        printf("%d\n",sum);


    }
    return 0;
}
