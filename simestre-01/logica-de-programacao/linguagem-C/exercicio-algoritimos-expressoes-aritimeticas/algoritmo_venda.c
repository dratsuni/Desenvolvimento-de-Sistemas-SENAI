#include <stdio.h>
#include "../utils/headers/inputs.h"
#define INSTALLMENTS 5

typedef struct Payer Payer;

struct Payer {
    double total_money;
    double installments;
    void (* payments_p) (Payer *);
};

void payments(Payer *payer){
    payer->installments = payer->total_money / INSTALLMENTS;
}


int main(){
    Payer payer = {0, 0, payments};
    
    printf("Digite o valor total pago: R$");
    double_input(&payer.total_money);
    payer.payments_p(&payer);
    printf("Resultado das parcelas: %.2lf\n", payer.installments);
}