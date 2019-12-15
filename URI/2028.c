#include<stdio.h>
int main()
{
    int x=1,n,i,j,s;


    while(scanf("%d",&n)!= EOF)
    {
        s=1;

        s+=((n*(n + 1)) / 2);
        if(n==0)
            printf("Caso %d: %d numero\n", x,s);
        else
            printf("Caso %d: %d numeros\n", x,s);


        x++;

        for(i=0; i<=n; i++)
        {
            if(i==0)
            {
                printf("%d",i);
            }
            else if(i != 0 && i != 1)
            {
                for(j=0; j<i; j++)
                {
                    printf(" %d",i);
                }

            }
            else
            {
                printf(" %d",i);
            }
        }
        printf("\n\n");

    }
}
