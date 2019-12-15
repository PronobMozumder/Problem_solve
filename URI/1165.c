#include <stdio.h>
int main()
{
    int n, x, i, j, flag = 0;

    scanf("%d",&x);
    for(j=1; j<=x; j++)
    {
        flag = 0;
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                flag++;
            }
        }

        if(flag==2)
        {
            printf("%d eh primo\n",n);
        }
        else
        {
            printf("%d nao eh primo\n",n);
        }

    }
    return 0;
}
