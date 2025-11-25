#ifndef INPUTS_H
#define  INPUTS_H
#include <stddef.h>

int int_input(int *p_int_var);
int double_input(double *p_double_var);
int float_input(float *p_float_var);
int str_input(char *char_array, size_t size);
#endif