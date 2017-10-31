#include <stdio.h>
#include <cs50.h>
#include <math.h>

int sumPrimes(int num){

    return num * 7;
}

int main (void){
    printf( "Please pick a reasonable number: __ ");
    int n = get_int();
    printf( "%d \n", sumPrimes(n) );
}