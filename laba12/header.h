#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <math.h>

typedef struct vector
{
    double x;
    double y;
    double z;
}vector;

vector vector_init(int x, int y, int z);

double get_len(vector vect);

void get_info(vector vect);
