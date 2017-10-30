#include <stdio.h>
#include <cs50.h>

long long factorialize(int num){
  if (num <= 1){
    return 1;
  }
  else {
    return num * factorialize(num-1);
  }
}

int main (void){
    printf( "Please pick a reasonable number: __ ");
    int n = get_int();
    printf( "%lld \n", factorialize(n) );
}










