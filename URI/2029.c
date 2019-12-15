#include <stdio.h>


int main()
{
    double v, r, h, d, a,PI=3.14;
    int tmp;
    while(scanf("%lf%lf", &v, &d)!=EOF)
    {
        r = d/2;
        a = PI*r*r;
        h = v/a;
        printf("ALTURA = %.2lf\n",h);
        printf("AREA = %.2lf\n",a);
    }
    return 0;
}
