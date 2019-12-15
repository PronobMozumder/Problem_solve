#include<stdio.h>
int main()
{
    char ch[1000];
    int c=0,c1=0, c2=0, s=0, i;

    while(1)
    {
        gets(ch);
        if(ch== "caw caw")
        {
            c++;
            if(c==3)
            {
                break;
            }
        }
        else if(ch=="--*")
        {
            c1++;
        }
        else if(ch=="*--")
        {
            c2+=4;
        }
    }
    printf("%d\n%d\n",c1,c2);
}
