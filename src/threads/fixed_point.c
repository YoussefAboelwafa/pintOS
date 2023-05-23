#include "fixed_point.h"
#include <stdio.h>
#include "stdint.h"
real real_from_int(int value){
    real result;
    result.value =value*F;
    return result;
}

real add_int(real value, int addend){
    value.value += addend *F;
    return value;
}

real add_real(real value, real addend){
    value.value += addend.value;
    return value;
}
real sub_int(real value, int subtrahend){
    value.value -= subtrahend *F;
    return value;
}
real sub_real(real value, real subtrahend){
    value.value -= subtrahend.value;
    return value;
}
real mul_int(real value, int multiplier){
    value.value *= multiplier;
    return value;
}
real mul_real(real value, real multiplier){
    value.value = ((int64_t)value.value) * multiplier.value /F;
    return value;
}
real div_int(real value, int divisor){
    value.value /= divisor;
    return value;
}
real div_real(real value, real divisor){
    value.value = ((int64_t)value.value) *F/ divisor.value;
    return value;
}

int int_round(real value){
    return value.value >= 0 ? (value.value + F/2) /F : (value.value - F/2) /F;
}

int int_floor(real value){
    return value.value /F;
}

int int_ceil(real value){
    return (value.value + (1 << 16) - 1) >> 16;
}