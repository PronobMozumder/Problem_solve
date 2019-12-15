#include<stdio.h>
int main()
{
    float pp, lp,p;

    scanf("%f %f", &lp, &pp);
    p= ((pp-lp)*100.00)/lp;
    printf("%.2f%%\n",p);
    return 0;
}
