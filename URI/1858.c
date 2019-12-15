#include<stdio.h>
int main()
{
    int ara[100],e=1,c,i,n,j ;

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }
    c=ara[j];
    for(j=0; j<n; j++)
    {
        if(ara[j]<c)
        {
            c=ara[j];
            e=j+1;
        }
    }
    printf("%d\n", e);
    return 0;
}
