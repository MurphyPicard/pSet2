#include <stdio.h>
#include <cs50.h>
#include <math.h>



bool isPrime(int number);
int sumPrimes(int num);


int main (void){
    printf( "Please pick a reasonable number: __ ");
    int n = get_int();
    printf( "%d \n", sumPrimes(n) );
}


bool isPrime(int number){
    for (int i = 2; i < number; i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

int sumPrimes(int num){
    int total = 0;

    for(int j = 2; j <= num; j++){
        if( isPrime(j) ){
            total = total + j;
        }
    }

    return total;
}