#include<stdio.h>
int main()
{
    float n,avg,x=0;
    int X1;

abc:
    while(1)
    {
        scanf("%f", &n);

        if(n>=0 && n<=10)
        {
            avg=avg+n;
            x++;

            if(x==2)
            {
                printf("media = %.2f\n", avg/2);
                x=0;
                avg=0;
                while(1)
                {
                    scanf("%d",&X1);
                    if(X1<1 || X1>2)
                      {
                           printf("novo calculo (1-sim 2-nao)\n");
                      }
                    else if(X1==1)
                    {
                         printf("novo calculo (1-sim 2-nao)\n");
                         goto abc;
                    }

                    else if(X1==2)
                    {
                         printf("novo calculo (1-sim 2-nao)\n");
                         exit(0);
                    }

                }

            }


        }

        else
        {
            printf("nota invalida\n");
        }


    }
    return 0;
}
