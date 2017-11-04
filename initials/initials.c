#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void){

    printf("Please type your name: ___ ");

    string name = get_string();
    int len = strlen(name);

    printf("This is your name: %s\n", name);
    printf("this is len: %d \n", len);

    for (int i = 0; i < len; i++)
    {
        if(i == 0){
            printf("%c", toupper(name[i]));
        }

        else if( !isalpha(name[i]) ){
            printf("%c", toupper(name[i + 1]) );
        }
    }
    printf("\n");
}