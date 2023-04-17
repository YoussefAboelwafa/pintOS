#ifndef FIXED_POINT_H
#define FIXED_POINT_H

#include <stdint.h>


typedef struct real real;


struct real {
    int value;
};

real real_from_int(int value);
real add_real(real a, real b);
real sub_real(real a, real b);
real mul_real(real a, real b);
real div_real(real a, real b);

real add_int(real a, int b);
real sub_int(real a, int b);
real mul_int(real a, int b);
real div_int(real a, int b);

int int_round(real a);
int int_floor(real a);
int int_ceil(real a);


#endif





