#include <stdio.h>
int main()
{
    long long int n;
    int remainder;

    scanf("%llu", &n);
    while(n)
    {
        remainder = n%10;
        n /= 10;
        printf("%d", remainder);
    }
    printf("\n");

    return 0;
}
