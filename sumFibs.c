#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (int n)
{
    printf("This is the sum of all fibs %i: \n", n);
    return sumFibs(n);
}

int sumFibs (int num)
{
    int sum = 1, priorfib = 1, curfib = 1;
    do
    {
        if( curfib % 2 != 1 )
        {
            sum += curfib;
        }
        int temp = priorfib;
        priorfib = curfib;
        curfib = temp;
    } while( curfib < num );
    return sum;
}