#include<stdio.h>
int main()
{
    int n, count=0,i;
    float avg,sum=0.0;


    while(1)
    {

        scanf("%d", &n);
        if(n>0)
        {
            count++;
            sum+=n;
        }
        else
        {
            break;
        }
    }
    avg = sum/count;
    printf("%.2f\n",avg);
    return 0;
}
