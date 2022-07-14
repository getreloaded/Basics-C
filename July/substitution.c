#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int check_arguments(int i);
int check_key(string key);
char encrypt(char letter, string key);

int main(int argc, string argv[])
{
    int test1 = check_arguments(argc);
    int test2 = check_key(argv[1]);

    if (test1 + test2 != 0)
    {
        return (1);
    }

    string plaintext = get_string("please input the string to be coded: ");
    printf("Plaintext:  %s\n", plaintext);
    char ciphertext[strlen(plaintext)+1];

    string key = argv[1];

    for (int i = 0, l = strlen(plaintext); i < l; i++)
    {
        if (isalpha(plaintext[i]))
        ciphertext[i] = encrypt(plaintext[i], key);
        else ciphertext[i]=plaintext[i];
    }
    printf("Ciphertext: ");
    for (int i = 0, l = strlen(plaintext); i < l; i++)
    {
        printf("%c", ciphertext[i]);
    }
    printf("\n");
    return 0;
}

int check_arguments(int i)
{
    if (i != 2)
    {
        printf("Usage: ./substitution key\n");
        return (1);
    }
    else
        return (0);
}

int check_key(string key)
{
    if (strlen(key) != 26)
    {
        printf("Key has 26 letters.\n");
        return (1);
    }

    for (int i = 0, l = strlen(key); i < l; i++)
    {
        if (isalpha(key[i]) == 0)
        {
            printf("Key has 26 letters.\n");
            return (1);
            break;
        }
    }
    return (0);
}

char encrypt(char letter, string key)
{
    int keyplace;
    if (isupper(letter))
        keyplace = letter - 65;
    else
        keyplace = letter - 97;

    if (isupper(letter) && islower(key[keyplace]))
        return key[keyplace] - 32;
    else if (islower(letter) && isupper(key[keyplace]))
        return key[keyplace] + 32;
    else 
        return key[keyplace];
}