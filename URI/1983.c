#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    int r[n],rm=0;
    double m[n],max=0.0;

    for(i=0; i<n; i++)
    {
        scanf("%d %lf", &r[i], &m[i]);
    }

    max=m[0];
    for(i=0; i<n; i++)
    {
        if(max<m[i])
        {
            max = m[i];
            rm = i;
        }

    }

    if(max<8)
    {
        printf("Minimum note not reached\n");
    }
    else
    {
        printf("%d\n", r[rm]);

    }
    return 0;
}
