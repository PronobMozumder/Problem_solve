#include<stdio.h>
int main()
{
    int i,n,n1,n2;

    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d", &n1, &n2);

        printf("%d\n",n1+n2);
    }
    return 0;
}
