#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double x1, x2;

    scanf("%d", &n);

    x1 = (n/log(n));
    x2 = 1.25506*(n/log(n));

    printf("%.1lf %.1lf\n", x1, x2);
    return 0;
}
