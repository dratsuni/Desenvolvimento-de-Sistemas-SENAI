#include <limits.h>
#include <ctype.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include "../utils/headers/inputs.h"
#define BUFFER_SIZE 22
#define ZERO_ASCII 48
#define INT_MIN_UNSIGNED 2147483648


static inline int is_signal(int chr){
    if (chr == '+' || chr == '-'){
        return 1;
    }
    return 0;
}


int int_input(int *p_int_var){
    char buffer[BUFFER_SIZE];
    char *end_pointer = NULL;

    if (fgets(buffer, sizeof(buffer), stdin) != NULL){
        if (buffer[0] != '\n'){
            int number = 0;
            int sucess = str_to_int(&number, buffer);
            
            if (sucess == 1){
                return 1;
            }

            *p_int_var = number;
            return 0;
        }
    }

    return 1;
}


int str_to_int(int *int_pointer, char *number_char_pointer){
    unsigned int result = 0;

    if (int_pointer != NULL && number_char_pointer != NULL){
        size_t length = strlen(number_char_pointer);
        int have_a_signal = is_signal(number_char_pointer[0]);
        
        for (size_t i = have_a_signal; i < length; i++){
            int to_number = (int) number_char_pointer[i];

            if(isdigit(to_number)){
                result = (result * 10) + (to_number - ZERO_ASCII); 
                if (result > INT_MIN_UNSIGNED){
                    return 1;
                }
            } else {
                return 1;
            }
        }

        if (number_char_pointer[0] == '-' || result == INT_MIN_UNSIGNED){
            result = -result;
        }
    
        *int_pointer = (int) result;
        return 0;
    }

    return 1;
}
