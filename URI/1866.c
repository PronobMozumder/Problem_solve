#include<stdio.h>
int main()
{
    int x,s,a,n,i,n1;
    scanf("%d", &n1);

    for(i=1; i<=n1; i++)
    {
        scanf("%d", &n);
        if(n%2==0)
        {
            s=((n/2)*1)+((n/2)*-1);
            printf("%d\n",s);
        }
        else
        {
            s=(n/2);
            a=(n-s);

            if(s>a)
            {
                x=s-a;
            }
            else
            {
                x=a-s;
            }
            printf("%d\n",x);
        }
    }

}
