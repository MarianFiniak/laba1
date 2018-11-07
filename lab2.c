#include <stdio.h>

    int main(void)
    {
        int n=20, sum=0;
            for (;n < 100; n=n+1)
            if (n % 3 == 0)
            {
                sum = sum + n;
            }
            printf("%i\n", sum);

        return 0;
    }
