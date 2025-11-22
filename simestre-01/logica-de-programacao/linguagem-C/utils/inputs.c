#include <limits.h>
#include <ctype.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include "../utils/headers/inputs.h"
#define BUFFER_SIZE 20
#define MIN_ASCII_NUMBER 48
#define MAX_ASCII_NUMBER 57


static inline int is_signal(int char_sig){
    if (char_sig == '-' || char_sig == '+'){
        return 1;
    }
    return 0;
}


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
        int have_a_signal = is_signal(number_char_pointer[0]);

        for (int i = have_a_signal; i < length; i++){
            if(isdigit(number_char_pointer[i])){
                int to_number = (int) number_char_pointer[i] - MIN_ASCII_NUMBER;
                result = (result * 10) + to_number;
            } else {
                return 1;
            }
            printf("RESULT: %ld\n", result);

        }
        
        if (have_a_signal){
            if (number_char_pointer[0] == '-'){
                result = -result;
            }
        }

        if (result > INT_MAX || result < INT_MIN){
            return 1;
        }

    
        *int_pointer = (int) result;
        return 0;
    }

    return 1;
}
