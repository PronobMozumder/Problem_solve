#include<stdio.h>
int main()
{
    int m, d, i, s;
    while(scanf("%d", &m)!= EOF)
    {
        scanf("%d",&d);
        if(m == 12 && d == 25)
        {
            printf("E natal!\n");
        }
        else if(m== 12 && d > 25 )
        {
            printf("Ja passou!\n");
        }
        else if(m == 12 && d == 24)
        {
            printf("E vespera de natal!\n");
        }
        else
        {

            i = (12-m)*30;
            s= i+(25-d);

            if(m==1 ||m==2 ||m==3)
            {
                s+=5;
            }
            else if(m==4 ||m==5 ||m==6)
            {
                s+=4;
            }
            else if(m==7)
            {
                s+=3;
            }
            else if(m==8)
            {
                s+=2;
            }
            else if(m==9 ||m==10)
            {
                s+=1;
            }

            printf("Faltam %d dias para o natal!\n",s);
        }
    }
    return 0;
}
