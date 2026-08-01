

#ifndef MATH_H_
#define MATH_H_


#include <stdint.h>


int float_to_uint(float x, float x_min, float x_max, int bits);
float uint_to_float(int x_int, float x_min, float x_max, int bits);


#endif /* MATH_H_ */
