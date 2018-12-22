#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

const int firstUpper = 65;
const int firstLower = 97;
const int charCount = 26;

int encodeUpper(int c, int key)
{
    return ((c%firstUpper)+key)%charCount+firstUpper;
}

int encodeLower(int c, int key)
{
    return ((c%firstLower)+key)%charCount+firstLower;
}

int normaliseKey(int key)
{
    int result = key % charCount;
    return result;
}

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf ("Введите только один аргумент \n");
        return 1;
    }

    int k = normaliseKey(atoi(argv[1]));

    printf ("Укажите текст для шифрования: \n");
    string s = get_string();

    for (int i = 0; i<strlen(s); i++)
    {
        if (!isalpha(s[i]))
        {
            printf ("%c", s[i]);
            continue;
        }

        if (isupper(s[i]))
        {
            int ch = encodeUpper(s[i], k);
            printf("%c", ch);
            continue;
        }

        if (islower(s[i]))
        {
            int ch = encodeLower(s[i], k);
            printf("%c", ch);
            continue;
        }

        printf("\n[ERROR] unknown char: %c", s[i]);
        return 1;
    }

    printf ("\n");
    return 0;
}