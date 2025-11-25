#include <errno.h>
#include <float.h>
#include <unistd.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdint.h>

#include <limits.h>
#include <string.h>
#include "../utils/headers/inputs.h"
#define NAME_SIZE 50
#define KB 1024
typedef struct {
    char nome[NAME_SIZE];
    double media;
} Aluno;



int str_input(char *char_array, size_t size);


int main() {
    int a = 0;


    printf("escreva algo: ");
    int_input(&a);

    printf("resultado: %d\n", a);
}






