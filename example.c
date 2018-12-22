#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[]) {
    int k = 0;

    if (argc != 2) {
        printf("print the key next time \n");
        return 1;
    }
    else {
        k = atoi(argv[1]);
    }

    printf("Enter the word: \n");
    string p = get_string();

    for (int i = 0, n = strlen(p); i < n; i++) {
        if (isalpha(p[i])) {

            if(islower(p[i]))  {
                printf("%c", ((((p[i] - 97) + k)%26) + 97));
            }

            else {
                printf("%c", ((((p[i] - 65)+ k)%26) + 65));
            }
        }

        else {
            printf("%c", p[i]);
        }
    }

    printf("\n");
    return 0;
}

