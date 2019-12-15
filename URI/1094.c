#include<stdio.h>
int main()
{
    int x,i,n,s=0,s1=0,s2=0,s3=0;
    char ch,C,R,S;
    float e,f,g;

    scanf("%d", &x);
    for(i=1; i<=x; i++)
    {
        scanf("%d %c",&n,&ch);
        if(ch == 'C')
        {
            s1=s1+n;
        }
        else if(ch == 'R')
        {
            s2=s2+n;
        }
        else if(ch == 'S')
        {
            s3=s3+n;
        }
        s=s1+s2+s3;
    }

    e= (s1/(s*1.0))*100.0;
    f= (s2/(s*1.0))*100.0;
    g= (s3/(s*1.0))*100.0;

    printf("Total: %d cobaias\n",s);
    printf("Total de coelhos: %d\n",s1);
    printf("Total de ratos: %d\n",s2);
    printf("Total de sapos: %d\n",s3);

    printf("Percentual de coelhos: %.2lf %%\n",e);
    printf("Percentual de ratos: %.2lf %%\n",f);
    printf("Percentual de sapos: %.2lf %%\n",g);

    return 0;

}
