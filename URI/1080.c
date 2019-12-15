#include <stdio.h>

int main()
{
    int n, x = 0, p, i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n);

        if(x < n)
            x = n, p = i;
    }

    printf("%d\n%d\n", x, p);

    return 0;
}
