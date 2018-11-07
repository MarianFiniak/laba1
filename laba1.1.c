#include <stdio.h>

int main(void)
{
    int n, m, m1, n1;

    printf("Write two number\n");
    scanf("%i %i", &n, &m);

    printf("This is:\n");
    n1 = n;
    m1 = m;
    printf("%i\n", n++ * m);

    n = n1;
    m = m1;
    printf("%s\n", n++ < m?"True":"False");

    n = n1;
    m = m1;
    printf("%s\n", m-- > n++?"True":"False");
    return 0;

}
