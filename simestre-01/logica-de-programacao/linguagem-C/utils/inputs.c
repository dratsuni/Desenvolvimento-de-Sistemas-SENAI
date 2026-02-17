#include <stddef.h>
#include <stdio.h>
#include <errno.h>

#include <stdlib.h>
#include "../utils/headers/inputs.h"
#include "../utils/headers/type_parsers.h"

#define BUFFER_SIZE 22

int int_input(int *p_int_var){
    char buffer[BUFFER_SIZE];

    if (!str_input(buffer, BUFFER_SIZE)){
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
    if (char_array != NULL && size > 0){
        int ascii = 0;
        size_t index = 0;
        
        while ((ascii = getchar()) != '\n' && ascii != EOF){
            if (index < size - 1){
                char_array[index] = (char) ascii;
                index++;
            }
        }

        char_array[index] = '\0';
        return 0;
    }

    return 1;
}

int double_input(double *p_double_var){
   char buffer[BUFFER_SIZE];
   if (!str_input(buffer, BUFFER_SIZE)){
        
        if (buffer[0] == '\0'){
            return 1;
        }

        errno = 0;
        char *p_end = NULL;
        double temp_double_var = strtod(buffer, &p_end);

        if (errno == ERANGE){
            return 1;
        }

        if (*p_end != '\0'){
            return 1;
        }
         
        
        *p_double_var = temp_double_var;
        return 0;

   }

   return 1;
}
