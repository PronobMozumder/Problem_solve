#include<stdio.h>
int main()
{
    int l,i, a=0,j=0,n,k=0 ;
    char ch[1000];

    while(scanf("%s", ch)!=EOF)
    {
        scanf("%d", &n);
        while(n--)
        {
            scanf("%d", &a);
            printf("%c", ch[a-1]);
        }
        printf("\n");
    }
    return 0;
}
