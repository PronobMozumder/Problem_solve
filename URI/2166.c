#include<stdio.h>
int main()
{
    double x=2,result=0.0, result2=0.0;
    int i,n;

    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        result2=x+result;
        result=1/result2;
    }

    printf("%.10lf\n", 1+result);
    return 0;
}
