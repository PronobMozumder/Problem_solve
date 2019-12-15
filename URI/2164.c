#include<stdio.h>
#include<math.h>
int main()
{
    double x=sqrt(5), result, a, b;
    int i,n;
    scanf("%d", &n);
    if(n>0 && n<=50)
    {
        a=(1+x)/2;
        b=(1-x)/2;
        for(i=1; i<=n; i++)
        {
            result = (pow(a,n)- pow(b,n))/x;
        }

        printf("%.1lf\n",result);
    }
    return 0;
}
