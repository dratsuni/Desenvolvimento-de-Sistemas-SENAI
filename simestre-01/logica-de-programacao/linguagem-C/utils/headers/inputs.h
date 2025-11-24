#ifndef INPUTS_H
#define  INPUTS_H


int int_input(int *p_int_var);
int double_input(double *p_double_var);
int float_input(float *p_float_var);
int string_input(char *char_pointer, int size);
int str_to_int(int *int_pointer, char *number_char_pointer);
#endif