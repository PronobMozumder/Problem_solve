#include<stdio.h>
int main()
{
    int a,b;

    scanf("%d %d", &a,&b);

    if(a<0)
    {
        printf("%d %d\n",-b, -(b*(-b)-a));
    }
    else
    {
        printf("%d %d\n",a/b, a%b);
    }



    return 0;
}
