#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int getrand(int min, int max)
{
 return (double)rand() / (RAND_MAX + 1.0) * (max - min) + min;
}

char* generate_word(int len)
{
    char* word = (char*)malloc(sizeof(char) * len + 1);
    word[len] = '\0';
    for(int i = 0; i < len; i++)
    {
        word[i] = (char)(getrand(65, 122));
    }

    return word;

}

char* reverse_word(char* word)
{
    char* str = (char*)malloc(sizeof(char) * strlen(word));

    for(int i = strlen(word) - 1, j = 0; i >= 0; i--)
    {
        str[j++] = word[i];
    }
    
    return str;
}


int main()
{
    FILE* file = fopen("file.txt", "w");

    int k = 0;

    while(k < 50)
    {
        char* t = generate_word(getrand(1,15));
        fputs(t, file);
        free(t);
        fputs("\n", file);
        k++;
    }

    rewind(file);

    int position = 0;

    char str[20];

    fputs(reverse_word("\nbiba"), file);

    /*while(fgets(str, 20, file) != NULL)
    {
        fseek(file, position, SEEK_SET);
        position += strlen(str);
        fputs(reverse_word(str), file);
    }
    fputs(reverse_word(str), file);*/

    return 0;
}
