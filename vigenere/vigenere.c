#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

bool isitaletter (string test);

int main(int argc, string argv[])
{
    // checking for only letters
    if (argc != 2 || isitaletter(argv[1]) == false)
    {
        printf("Only letters next time, please. \n");
        return 1;
    }
    else
    {
        string a = argv[1];

        // asking user for a string
        printf("please type a string: ");
        string p = get_string();

        // printing the word ciphertext because they want me to
        printf("ciphertext: ");

        // notice both i and letter incrementing at different times/rates
        for (int i = 0, letter = 0; i < strlen(p); i++)
        {
            if (isalpha(p[i]))
            {
                // looping through the letters of the code word
                letter = letter % strlen(argv[1]);

                // four formulas based on upeercase and lowercase
                char formula1 = (p[i] - 'A' + a[letter] - 'A') % 26 + 'A';//message upper and codeword upper
                char formula2 = (p[i] - 'a' + a[letter] - 'A') % 26 + 'a';//message lower c upper
                char formula3 = (p[i] - 'A' + a[letter] - 'a') % 26 + 'A';//message upper c lower
                char formula4 = (p[i] - 'a' + a[letter] - 'a') % 26 + 'a';//message lower c lower

                // Using each of the 4 formulas above... should refactor in the future.
                if (isupper(p[i]) && isupper(a[i % (strlen(argv[1]))]))
                {
                    printf("%c", formula1);
                }
                else if (islower(p[i]) && isupper(a[i % (strlen(argv[1]))]))
                {
                    printf("%c", formula2);
                }
                else if (isupper(p[i]) && islower(a[i % (strlen(argv[1]))]))
                {
                    printf("%c", formula3);
                }
                else if (islower(p[i]) && islower(a[i % (strlen(argv[1]))]))
                {
                    printf("%c", formula4);
                }
                letter++;
            }
            else
            {
                // Prints a non-alpha character, and the letter variable does not increment.
                printf("%c", p[i]);
            }
        }
        printf("\n");
        return 0;
    }
}

// a function that checks if a character is a letter
bool isitaletter(string test)
{
    for (int i = 0 ; i < strlen(test) ; i++)
    {
        if ( !isalpha(test[i]) )
        {
            return false;
        }
    }
    return true;
}