#include <stdio.h>
int main()
{
    int n,i=0,x,c=0,b=0;

    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&x);

        if(x>=10 && x>=20)
        {
            c++;
        }
        else
        {
            b++;
        }

        i++;
    }

    printf("%d in\n%d out\n",b,c);
    return 0;
}
