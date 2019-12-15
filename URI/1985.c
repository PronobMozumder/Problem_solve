#include<stdio.h>
int main()
{
    int n,code,x, i, pq=0;
    float pp;

    scanf("%d", &n);
    for(i=0; i<n;i++)
    {
        scanf("%d %d", &code, &pq);
        x=code;
        if(code==1001)
        {
            pp+=(1.50*pq);
        }
        else if(code==1002)
        {
            pp+=(2.50*pq);
        }
        else if(code==1003)
        {
            pp+=(3.50*pq);
        }
        else if(code==1004)
        {
            pp+=(4.50*pq);
        }
        else if(code==1005)
        {
            pp+=(5.50*pq);
        }
    }
    printf("%.2lf\n", pp);
    return 0;
}
