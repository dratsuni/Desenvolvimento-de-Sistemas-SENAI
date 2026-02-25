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
#define NOTA_QUANT 3

typedef struct {
    char nome[NAME_SIZE];
    double notas[NOTA_QUANT];
    double media;
} Aluno_t;


void preencher_notas(double *p, size_t size){
    double *temp_pointer = p;
    for (size_t i = 0; i < size; i++){
        printf("Digite a %zua nota: ", i + 1);
        while(double_input(temp_pointer) != 0){
            printf("Ocorreu um erro. tente novamente: ");
        }
        temp_pointer++;
    }
}

void show_notas(double *p_notas, size_t size){
    double *temp_pointer = p_notas;
    for(size_t i = 0; i < size; i++){
        printf("%zua nota: %.1lf\n", i + 1, *temp_pointer);
        temp_pointer++;
    }
}

void sum_notas(double *p_array_notas, double *media, size_t size){
    double sum = 0;
    double *temp_array = p_array_notas;
    for (size_t i = 0; i < size; i++){
        sum += *temp_array;
        temp_array++;
    }

    if (sum > 0){
        *media = sum / NOTA_QUANT;
    } else {
        *media = 0.0;
    }

}
int main(){
    Aluno_t aluno;
    printf("Digite o nome do aluno: ");
    str_input(aluno.nome, NAME_SIZE);
    preencher_notas(aluno.notas, NOTA_QUANT);
    sum_notas(aluno.notas, &aluno.media, NOTA_QUANT);
    printf("=====Resultados=====\n");
    printf("Aluno: %s\n", aluno.nome);
    show_notas(aluno.notas, NOTA_QUANT);
    printf("média: %.1lf\n",  aluno.media);
}







