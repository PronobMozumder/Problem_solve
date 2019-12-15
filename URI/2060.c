#include<stdio.h>
int main()
{
    int n,x, i, count=0, count1=0, count2=0, count3=0;

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);

        if(x%2==0)
        {
            count++;
        }
        if(x%3==0)
        {
            count1++;
        }
        if(x%4==0)
        {
            count2++;
        }
        if(x%5==0)
        {
            count3++;
        }
    }


    printf("%d Multiplo(s) de 2\n", count);
    printf("%d Multiplo(s) de 3\n", count1);
    printf("%d Multiplo(s) de 4\n", count2);
    printf("%d Multiplo(s) de 5\n", count3);
    return 0;
}
