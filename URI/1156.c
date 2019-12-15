#include<stdio.h>
int main()
{
    float i,j,sum=0.0;
    for(i=3,j=2;i<=39;i=i+2,j=j*2)
    {
        sum+=(i/j);
    }
    printf("%.2f\n",sum+1);
    return 0;
}
