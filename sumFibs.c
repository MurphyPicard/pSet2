#include <stdio.h>
#include <cs50.h>
#include <math.h>

int sumFibs (int num);

int main (void)
{
    printf("we are going to add all the fibonacci numbers up to __: ");
    int n = get_int();
    printf("This is the sum of all fibs: %i \n", sumFibs(n) );
    return sumFibs(n);
}

int sumFibs (int num)
{
    int sum = 1, priorfib = 1, curfib = 1;
    do
    {
        if( curfib % 2 != 0 )
        {
            sum += curfib;
        }
        int temp = priorfib;
        priorfib = curfib;
        curfib = temp + priorfib;
    } while( curfib < num );
    return sum;
}