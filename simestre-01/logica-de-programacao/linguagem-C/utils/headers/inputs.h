#ifndef INPUTS_H
#define  INPUTS_H
#define  LETTER_IN_INT_INPUT 3
#define INT_MAX_OUT_OF_RANGE 4
#define OUT_OF_RANGE 2
#define VOID_INPUT 1
#define SUCESS 0

int int_input(int *p_int_var);
int double_input(double *p_double_var);
int float_input(float *p_float_var);
int string_input(char *char_pointer, int size);
int str_to_int(int *int_pointer, char *number_char_pointer);
#endif