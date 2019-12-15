#include<stdio.h>
int main()
{
    double i,j,a,b,n,ar, br;
    int count=0;
    scanf("%lf %lf %lf %lf", &a, &b, &ar, &br);

    for(i=a, j=b; i<=j;i+=ar,j+=br)
    {
        count++;
    }
    printf("%d",count);
    return 0;
}
