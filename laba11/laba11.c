#include <stdio.h>
#include <math.h>
#define pi 3.14


//Программа считает с погрешностью, т.к происходит переполнени. У меня такая же фигня была, хз, как с этим бороться, но он у меня и так работу принял
int factorial(int n)
{
    if(n == 1 || n == 0)
        return 1;

    return n * factorial(n-1);
}

long double acosx(long double x, int n)
{
    if(x > 1 || x < -1)
    {
        printf("Invalid argument");
        return 0;
    }

    long double F = (long double)((factorial((2*n)))/(factorial(pow(2,2*n)) * pow(factorial(n), 2))) * (pow(x, 2*n+1))/(2*n+1);

    if(pi/2 - F < pow(10, -3) || n >= 2)
        return pi/2 - F;
    
   
    return (long double)pi/2 - (F + acosx(x, n+1));
}

int main()
{
    printf("%d ", factorial(6));
    printf("%Lf", acosx(0.9, 0));
    return 0;
}