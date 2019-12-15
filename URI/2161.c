#include<stdio.h>
int main()
{
    double result=0.0,x=6,result2=0.0;
    int i, n;

    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        result2=x+result;
        result=1/result2;
    }
    printf("%.10lf\n", result+3);
    return 0;
}
