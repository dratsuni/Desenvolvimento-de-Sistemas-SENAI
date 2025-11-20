#include <stdio.h>



typedef struct {
    double (*PointerFunc) (double, double);
    char operator;
} Operation;

void clean_buffer();
double sum(double n1, double n2);
double mult(double n1, double n2);
double sub(double n1, double n2);
double div(double n1, double n2);
void calculate(double n1, double n2);

int main(){
    double n1 = 0;
    double n2 = 0;

    printf("Digite o valor do primeiro numero: ");
    scanf("%lf", &n1);
    clean_buffer();
    printf("Digite o valor do segundo numero: ");
    scanf("%lf", &n2);
    clean_buffer();
    calculate(n1, n2);
    return 0;
}

void clean_buffer(){
    int c = 0;
    while((c = getchar()) != '\n' && c != EOF);
}

double sum(double n1, double n2){
    return n1 + n2;
}

double mult(double n1, double n2){
    return n1 * n2;
}

double sub(double n1, double n2){
    return n1 - n2;
}

double div(double n1, double n2){
    if (n2 != 0){
        return n1 / n2;
    }

    return 0;
}

void calculate(double n1, double n2){
    Operation operation[] = {{sum, '+'}, {mult, '*'}, {sub, '-'}, {div, '/'} };
    int operation_size = sizeof(operation) / sizeof(Operation);

    for (int i = 0; i < operation_size; i++){
        printf("%.0lf %c %.0lf = %.2lf\n", n1, operation[i].operator, n2, operation[i].PointerFunc(n1, n2));
    }
}

