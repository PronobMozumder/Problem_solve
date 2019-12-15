#include<stdio.h>
#include<string.h>
int main()
{
    int x;
    char ch[1000];
    gets(ch);
    x = strlen(ch);

    if(x<80)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

