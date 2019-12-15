#include<stdio.h>
int main()
{
    int n,i,temp1=1, temp2=1,temp3;

    scanf("%d",&n);
    printf("0");
    for(i=1; i<n; i++)
    {
        printf(" %d", temp1);
        temp3=temp1+temp2;
        temp1 = temp2;
        temp2 = temp3;
    }
    printf("\n");
    return 0;
}

