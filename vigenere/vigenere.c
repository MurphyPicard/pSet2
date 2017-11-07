#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

bool isitaletter (string test);

int main(int argc, string argv[])
{
    if (argc != 2 || isitaletter(argv[1]) == false)
    {
        printf("Only letters next time, please. \n");
        return 1;
    }
    else
    {
        string a = argv[1];

        printf("please type a string: ");
        string p = get_string();

        printf("ciphertext: ");
        for (int i = 0, letter = 0 ; i < strlen(p); i++)
        {
            if (isalpha(p[i]))
            {
                letter = letter % strlen(argv[1]);
                char formula1 = (p[i] - 'A' + a[letter] - 'A') % 26 + 'A';//message upper and codeword upper
                char formula2 = (p[i] - 'a' + a[letter] - 'A') % 26 + 'a';//message lower c upper
                char formula3 = (p[i] - 'A' + a[letter] - 'a') % 26 + 'A';//message upper c lower
                char formula4 = (p[i] - 'a' + a[letter] - 'a') % 26 + 'a';//message lower c lower

                if (isupper(p[i]) && isupper(a[i%(strlen(argv[1]))]))
                {
                    printf("%c", formula1);
                }
                else if (islower(p[i]) && isupper(a[i%(strlen(argv[1]))]))
                {
                    printf("%c", formula2);
                }
                else if (isupper(p[i]) && islower(a[i%(strlen(argv[1]))]))
                {
                    printf("%c", formula3);
                }
                else if (islower(p[i]) && islower(a[i%(strlen(argv[1]))]))
                {
                    printf("%c", formula4);
                }
                letter++;
            }
            else
            {
                printf("%c", p[i]);
            }
        }
        printf("\n");
        return 0;
    }
}
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