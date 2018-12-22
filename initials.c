#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    printf("Your name:\n"); // запрос имени
    string s = get_string (); // вводим имя
    int w = strlen (s); // считаем колличество знаков
    printf ("%c", toupper (s[0])); // выводим первую букву

    for (int i = 0; i < w; i++)  // цикл для поиска пробела
        {
            if (s[i] == ' ')
            {
            printf("%c", toupper (s[i+1]));
            }
        }
    printf ("/n");
}

