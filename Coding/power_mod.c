#include <stdio.h>
//input:int x,y,m
//output:x^y mod m

int power(int x, int y, int m)
{
    int res = 1;
    x %= m;
    while (y)
    {
        if (y & 1)
        {
            res = (res * x) % m;
        }
        x = (x * x) % m;
        y >>= 1;
    }
    return res;
}

int main()
{
    int x, y, m;
    scanf("%d%d%d", &x, &y, &m);
    printf("%d\n", power(x, y, m));
    return 0;
}
