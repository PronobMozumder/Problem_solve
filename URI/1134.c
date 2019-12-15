#include<stdio.h>
int main()
{
    int n,c=0,count=0,d=0;
     while(1)
     {
         scanf("%d",&n);

         if(n==1)
         {
             c++;
         }
         else if(n==2)
         {
             count++;
         }
         else if(n==3)
         {
             d++;
         }
         else if(n==4)
         {
             break;
         }

     }
     printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",c,count,d);

}
