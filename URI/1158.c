#include<stdio.h>
int main()
{
    int n,i,j,sum=0,a,b;

    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %d",&a,&b);

        if(a%2==0)
        {
            a++;
        }
            for(j = 1; j <=b; j++)
            {
                sum += a;
                a += 2;;
            }
        printf("%d\n",sum);
        sum=0;


    }
    return 0;
}
