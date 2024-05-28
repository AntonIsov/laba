#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    if(n == 1 || n == 0)
        return 1;

    return n * factorial(n-1);
}

double sr(int start, int end)
{
    if(start > end)
        return 0;

    return start + sr(start+1, end);
}

int main()
{
    printf("%d ", factorial(6));
    printf("%lf", sr(3,10) / (10 - 3));
    return 0;
}