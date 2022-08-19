#include <stdio.h>
int main()
{
    int t, i, x, n, q;
    long long int g;
    scanf("%d", &t);
    while (t != 0)
    {
        scanf("%lld", &g);
        while (g != 0)
        {
            scanf("%d %d %d", &i, &n, &q);
            if (n % 2 == 0)
                printf("%d \n", n / 2);
            else
            {
                if (i == 1 && q == 1)
                    printf("%d \n", n / 2);
                else if (i == 1 && q == 2)
                    printf("%d \n", (n / 2 + 1));
                else if (i == 2 && q == 2)
                    printf("%d \n", n / 2);
                else if (i == 2 && q == 1)
                    printf("%d \n", (n / 2 + 1));
            }
            g--;
        }
        t--;
    }
    return 0;
}
