#include<stdio.h>
int main()
{
    int x;
    char ch[1000];

    gets(ch);

    x=strlen(ch);

    if(x<= 140)
    {
        printf("TWEET\n");
    }
    else
    {
        printf("MUTE\n");
    }
return 0;
}
