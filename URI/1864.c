#include<stdio.h>
int main()
{
    char ch[]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    int i=0,n;
    scanf("%d", &n);
    while(i<n)
    {
        printf("%c", ch[i]);
        i++;
    }
    printf("\n");
    return 0;
}
