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






int main() {
    char a[20] = "2147483";
    int num = 0;
    str_to_int(&num, a);   
    printf("resultado: %d\n", num);
}





