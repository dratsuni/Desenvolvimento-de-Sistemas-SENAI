#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "../utils/headers/inputs.h"
#include "../utils/headers/type_parsers.h"

#define INT_BUFFER_SIZE 22

int int_input(int *p_int_var){
    char buffer[INT_BUFFER_SIZE];
    char *end_pointer = NULL;

    if (str_input(buffer, INT_BUFFER_SIZE)){
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

int str_input(char *char_array, size_t size){
    int ascii = 0;
    size_t index = 0;

    if (char_array != NULL && size > 0){
        while ((ascii = getchar()) != '\n' && ascii != EOF){
            if (index < size - 1){
                char_array[index] = (char) ascii;
                index++;
            }
        }

        char_array[index] = '\0';
        return 1;
    }

    return 0;
}
