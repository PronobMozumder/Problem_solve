#include<stdio.h>
int main()
{
   long int n,n1,m;
    scanf("%ld %ld", &n, &n1);
    if((n>=3 && n<= 1000000) && (n1>=1 && n1<= 4000))
    {
        m= n*n1;
    }

    printf("%ld\n", m);
    return 0;
}
