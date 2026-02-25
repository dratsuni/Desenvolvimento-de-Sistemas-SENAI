#include "../utils/headers/type_parsers.h"
#include <stdio.h>
#include <stdint.h>
#include <ctype.h>
#define ZERO_ASCII 48
#define INT_MIN_UNSIGNED 2147483648


int str_to_int(int *int_pointer, char *number_char_pointer){

    if (int_pointer != NULL && number_char_pointer != NULL){
        int negator = 1;
        int index = 0;
        int converted_numbers = 0;

        if (number_char_pointer[0] == '-'){
            negator = -negator;
            number_char_pointer++;
        }
        
        int64_t result = 0;

        while (number_char_pointer[index] != '\0'){
            char ascii =  number_char_pointer[index];

            if(isdigit(ascii)){
                int to_number = ascii - ZERO_ASCII;
                result = (result * 10) + to_number; 
                if (result > INT_MIN_UNSIGNED){
                    return 1;
                }
                converted_numbers++;
            } else {
                return 1;
            }

            index++;
        }

        if (converted_numbers > 0){
            if (negator == 1 && result == INT_MIN_UNSIGNED){ 
                return 1;
            }
            
            *int_pointer = (int) result * negator;
            return 0;
        }
    }

    return 1;
}