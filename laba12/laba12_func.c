#include "header.h"
vector vector_init(int x, int y, int z)
{
    vector vect;

    vect.x = x;
    vect.y = y;
    vect.z = z;

    return vect;
}

double get_len(vector vect)
{
    return pow((pow(vect.x,2) + pow(vect.y,2) + pow(vect.z,2)), 0.5);
}

void get_info(vector vect)
{
    printf("x = %lf\ny = %lf\nz = %lf\nlenght = %lf\n", vect.x, vect.y, vect.z,get_len(vect));
}
