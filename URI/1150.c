#include<stdio.h>
int main()
{
    int x,y,i;
    scanf("%d%d", &x, &y);
    while(x>=y)
    {
        scanf("%d",&y);
    }

    printf("%d%d",x,y);
    return 0;
}
