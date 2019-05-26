#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]) 
{
    
    // error for not putting a value
    if (argc != 2) 
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // returns key number
    int k = atoi(argv[1]);
    
    // error if key is incorrect
    if (k <= 0) 
    {
        printf("please enter a proper value. \n");
        return 2;
    }
    
    string plaintext = get_string("plaintext: ");
    int n = strlen(plaintext);
    
    printf("ciphertext: ");
    
    // loops through plaintext characters using its length
    for (int i = 0; i < n; i++)
    {
        
        // checks if the character is upperCase
        if (isupper(plaintext[i]))
        {
            printf("%c", (((plaintext[i] + k) - 65) % 26) + 65);
        }

        // checks if the character is lowerCase
        else if (islower(plaintext[i]))
        {
            printf("%c", (((plaintext[i] + k) - 97) % 26) + 97);

        }

        //default
        else
        {
            printf("%c", plaintext[i]);
        }
    }

    // prints a new line
    printf("\n");
    
}
