#include "header.h"

int main()
{
    printf("Enter count of vector: ");

    int size;

    scanf("%d", &size);

    vector vect[size];

    for(int i = 0; i < size; i++)
    {
        vect[i] = vector_init(rand() % 30, rand() % 30, rand() % 30);
        printf("vector number %d:\n", i+1);
        get_info(vect[i]);
    }

    vector tmp;

    for(int i = 0; i < size; i++)
    {
        if(get_len(vect[i]) > get_len(tmp))
        {
            tmp = vect[i];
        }
    }

    printf("Vector with max lenght: \n");

    get_info(tmp);
    return 0;
}