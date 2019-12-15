#include <stdio.h>
#include <math.h>

int main()
{
    long long int b, p, n, count=0;


    scanf("%lld%lld",&b,&p);

    n = pow(b,p);

    printf("%lld\n", n);

    while(n != 0)
    {
        n /= 10;
        ++count;
    }

    printf("%lld\n", count);


    return 0;
}

