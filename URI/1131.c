#include<stdio.h>
int main()
{
    int c=0,d=0,g1,g2,g=0,i=0,G=0,e=0,X1;

    while(1)
    {
        scanf("%d %d",&g1, &g2);


        if(g1>g2)
        {
            i++;
        }
        if(g1<g2)
        {
            G++;
        }
        if(g1==g2)
        {
            e++;
        }
        c+=g1;
        d+=g2;
        g++;

        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&X1);
        if(X1==1)
        {
            continue;
        }

        if(X1==2)
        {
            break;
        }

    }
    printf("%d grenais\n",g);
    printf("Inter:%d\n",i);
    printf("Gremio:%d\n",G);
    printf("Empates:%d\n",e);
    if(i>G)
    {
        printf("Inter venceu mais\n");
    }
    if(i<G)
    {
        printf("Gremio venceu mais\n");
    }
    if(i==G)
    {
        printf("Nao houve vencedor\n");
    }

    return 0;
}
