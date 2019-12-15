#include<stdio.h>
int main()
{
    char ch[100], ch2[]="Thor";
    int n,i=0,n2;

    scanf("%d", &n2);
    while(i<n2)
    {
        scanf("%s",&ch);
        scanf("%d",&n);

        if(strcmp(ch,ch2))
        {
            printf("N\n");
        }

        else
        {
            printf("Y\n");
        }
        i++;
    }
return 0;
}
