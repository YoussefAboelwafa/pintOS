#include "utils/fixedpoint/fixed_point.h"

real real_from_int(int value){
    real result;
    result.value = value << 16;
    return result;
}

real add_int(real value, int addend){
    value.value += addend << 16;
    return value;
}

real add_real(real value, real addend){
    value.value += addend.value;
    return value;
}
real sub_int(real value, int subtrahend){
    value.value -= subtrahend << 16;
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
    value.value = ((int64_t)value.value) * multiplier.value >> 16;
    return value;
}
real div_int(real value, int divisor){
    value.value /= divisor;
    return value;
}
real div_real(real value, real divisor){
    value.value = ((int64_t)value.value) << 16 / divisor.value;
    return value;
}

int int_round(real value){
    return value.value >= 0 ? (value.value + (1 << 15)) >> 16 : (value.value - (1 << 15)) >> 16;
}

int int_floor(real value){
    return value.value >> 16;
}

int int_ceil(real value){
    return (value.value + (1 << 16) - 1) >> 16;
}








