#include<stdio.h>
int main()
{
    int i,n;

    scanf("%d",&n);

    for(i=n;i<n+12;i++)
    {
        if(i%2==1)
        {
          printf("%d\n",i);
        }
    }
    return 0;
}
