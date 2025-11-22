#include <limits.h>
#include <ctype.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include "../utils/headers/inputs.h"
#define BUFFER_SIZE 22
#define ZERO_ASCII 48



int int_input(int *p_int_var){
    char buffer[BUFFER_SIZE];
    char *end_pointer = NULL;
    errno = 0;

    if (fgets(buffer, sizeof(buffer), stdin) != NULL){
        if (buffer[0] != '\n'){
            long temp_var = strtol(buffer, &end_pointer, 10);
            if (errno == ERANGE){
                return OUT_OF_RANGE;
            } if (end_pointer == buffer && end_pointer[0] != '\n'){
                return  LETTER_IN_INT_INPUT;
            } if (temp_var > INT_MAX){
                return INT_MAX_OUT_OF_RANGE;
            }

            *p_int_var = (int) temp_var;
            return SUCESS;
        }
    }

    return VOID_INPUT;
}


int str_to_int(int *int_pointer, char *number_char_pointer){
    long length = 0;
    long result = 0;

    if (int_pointer != NULL && number_char_pointer != NULL){
        length = (long) strlen(number_char_pointer);

        for (long i = 0; i < length; i++){
            if (result > INT_MAX || result < INT_MIN){
                return 1;
            }
            if(isdigit(number_char_pointer[i])){
                int to_number = number_char_pointer[i] - ZERO_ASCII;
                result = (result * 10) + to_number;
            } else {
                return 1;
            }
            printf("RESULT: %ld\n", result);

        }
        



    
        *int_pointer = (int) result;
        return 0;
    }

    return 1;
}
