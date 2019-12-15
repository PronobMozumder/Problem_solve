#include<stdio.h>
int main()
{
    char ch[100], ch2[100];
    int c=1,i, j, l1, l2, count=0, count1=0;

    while(gets(ch)!= EOF)
    {
        l1= strlen(ch);

        gets(ch2);
        l2= strlen(ch2);

        for(i=0; i<l2;)
        {
            j=0;
            count=0;
            while(ch2[i] == ch[j])
            {
                count++;
                i++;
                j++;
            }
            if(count == l1)
            {
                count1++;
                count=0;
            }
            else
            {
                i++;
            }

        }
        printf("Caso #%d:\n", c);
        if(count1!= 0)
        {
            printf("Qtd.Subsequencias: %d\n", count1+1);
            printf("Pos: %d\n", i-l1-1);
        }
        else
        {
            printf("Nao existe subsequencia\n");
        }

        c++;
        count1=0;
        printf("\n");
    }

    return 0;
}
