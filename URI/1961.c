#include<stdio.h>
int main()
{
    int ara[1000],i,t,j,k,flag=0;

    scanf("%d%d",&k,&t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &ara[i]);
    }


    for(i=1; i<t; i++)
    {
        j=ara[i]-ara[i-1];

        if(j<0)
        {
            j*=-1;
        }
        if(j>k)
        {
            flag=1;
            break;
        }

    }

    if(flag==1)
    {
        printf("GAME OVER\n");
    }
    else
    {
        printf("YOU WIN\n");
    }
    return 0;
}
