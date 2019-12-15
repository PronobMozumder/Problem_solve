#include<stdio.h>

int main()
{
    int n,s=0,i;

    for(;;){
        scanf("%d",&n);
        if(n==0) break;
        if(n%2==1){
            n++;
        }
        for(i=0;i<5;i++){
            s+=n;

            n+=2;

        }

        i=0;
        printf("%d\n",s);
        s=0;
    }
}
