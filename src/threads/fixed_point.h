#ifndef FIXED_POINT_H
#define FIXED_POINT_H


#define F (1<<14)
typedef struct {
    int value;
}real;

real real_from_int(int value);
real sub_real(real a, real b);
real mul_real(real a, real b);
real div_real(real a, real b);
real add_real(real a, real b);

real add_int(real a, int b);
real sub_int(real a, int b);
real mul_int(real a, int b);
real div_int(real a, int b);

int int_round(real a);
int int_floor(real a);
int int_ceil(real a);




#endif