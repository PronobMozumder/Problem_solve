#include<stdio.h>
int main()
{
    int n1, n2, a,b,i,sum=0;

    while(1)
    {
        scanf("%d %d",&n1, &n2);
        if(n1==0 || n2==0)
        {
            break;
        }
        else
        {
            if(n1<n2)
            {
                a=n1;
                b=n2;
            }
            else
            {
                a=n2;
                b=n1;
            }

            for(i=a; i<=b; i++)
            {
                sum+=i;
             printf("%d ", i);
            }
            printf("Sum=%d\n",sum);
            sum=0;
        }
    }

    return 0;
}
