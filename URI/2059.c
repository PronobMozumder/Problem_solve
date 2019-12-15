#include<stdio.h>
int main()
{
    int p,j1,j2,r,a,sum;
    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

        sum = j1+j2;

        if(sum%2==0 && p==1  ||  sum%2==1 && p==0)
        {
             if(r==1 && a==0)
            {
                 printf("Jogador 1 ganha!\n");
            }
            else if(r==a)
            {
                printf("Jogador 1 ganha!\n");
            }
            else if(r==0 && a==1)
            {
                printf("Jogador 2 ganha!\n");
            }

        }

        else if(sum%2==1 && p==1 ||  sum%2==0 && p==0 )
        {
            if(a==r)
            {
                printf("Jogador 2 ganha!\n");
            }
            else if(a==1 && r==0)
            {
                printf("Jogador 2 ganha!\n");
            }
            else if(r==1 && a==0)
            {
                 printf("Jogador 1 ganha!\n");
            }
        }

}
