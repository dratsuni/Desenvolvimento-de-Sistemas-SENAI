#include <stdio.h>


typedef struct {
    double (*PointerFunc) (double, double); 
    char operator;
} Operation;

void cleanBuffer();
double sum(double n1, double n2);
double mult(double n1, double n2);
double sub(double n1, double n2);
double div(double n1, double n2);
void calculate(double n1, double n2);

int main(){
    double n1, n2;

    printf("Digite o valor do primeiro numero: ");
    scanf("%lf", &n1);
    cleanBuffer();
    printf("Digite o valor do segundo numero: ");
    scanf("%lf", &n2);
    cleanBuffer();
    calculate(n1, n2);
    return 0;
}

void cleanBuffer(){
    int c;
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
    Operation operation[4] = {{sum, '+'}, {mult, '*'}, {sub, '-'}, {div, '/'} };

    for (int i = 0; i < 4; i++){
        printf("%.0lf  %c  %.0lf = %.2lf\n", n1, operation[i].operator, n2, operation[i].PointerFunc(n1, n2));
    }
}