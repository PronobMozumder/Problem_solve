#include<stdio.h>
int main()
{
    long long int x,y, result;

    while(scanf("%lld", &x)!=0)
    {
        scanf("%lld", &y);
        if(y!=0)
        {
            result= x*y;
        }
        else
        {
            break;
        }
        printf("%lld\n", result);
        result=0;
    }
    return 0;
}
