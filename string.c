#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char sentence[1000];
    int charnum = 0;
    char *vl, *tokenword;

    printf("Input:  ");
    fgets(sentence, 100, stdin);

    // Remove the new line at the end of the sentence.
    sentence[strlen(sentence) - 1] = 0;

    // Break input sentence into words.  Tokenword is a pointer to the first word.
    tokenword = strtok(sentence, " ");

    // Keep looking through all the words.
    while (tokenword != NULL)
    {
        // Look for the vowels in the word and print the letters before the vowles.
        if (vl = strchr(tokenword, 'a')){
            printf("%s",vl);
            for (charnum = 0; charnum < vl-tokenword ; charnum++){
                printf("%c",tokenword[charnum]);
            }
        }

        if (vl = strchr(tokenword, 'e')){
            printf("%s",vl);
            for (charnum = 0; charnum < vl-tokenword ; charnum++){
                printf("%c",tokenword[charnum]);
            }
        }

        if (vl = strchr(tokenword, 'i')){
            printf("%s",vl);
            for (charnum = 0; charnum < vl-tokenword ; charnum++){
                printf("%c",tokenword[charnum]);
            }
        }

        if (vl = strchr(tokenword, 'o')){
            printf("%s",vl);
            for (charnum = 0; charnum < vl-tokenword ; charnum++){
                printf("%c",tokenword[charnum]);
            }
        }

        if (vl = strchr(tokenword, 'u')){
            printf("%s",vl);
            for (charnum = 0; charnum < vl-tokenword ; charnum++){
                printf("%c",tokenword[charnum]);
            }
        }

        // Get the next word in the sentence.  Tokenword is a pointer to the next word.
        tokenword = strtok(NULL, " ");

        // Print the ay at the end of the word.
        printf("ay ");
    }

    // clean up the output
    printf("\n");
    return 0;
}
