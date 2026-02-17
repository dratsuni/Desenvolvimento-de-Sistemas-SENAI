#include <stdio.h>
#include "../utils/headers/inputs.h"
#define JUROS 0.70


typedef struct Deposito_t Deposito_t;

struct Deposito_t {
    double dinheiro_depositado;
    double rendimento;
    void (*calcular)(Deposito_t *);

};


void calcular_juros(Deposito_t *deposito){
    deposito->rendimento = (0.70 / 100) * deposito->dinheiro_depositado;
}

int main(){
    Deposito_t deposito;
    deposito.calcular = calcular_juros;
    
    printf("Digite valor do dinhero depositado: R$ ");
    double_input(&deposito.dinheiro_depositado);
    deposito.calcular(&deposito);
    printf("Valor inicial: R$ %.2lf\n", deposito.dinheiro_depositado);
    printf("rendimento: R$ %.2lf\n", deposito.rendimento);
}