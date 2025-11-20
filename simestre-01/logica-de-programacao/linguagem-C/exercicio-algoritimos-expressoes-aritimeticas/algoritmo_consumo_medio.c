#include <stdio.h>
#include <math.h>
#define EPSILON 0.1

static inline double average(double distance, double fuelConsumed){
    if (fuelConsumed < EPSILON) {return INFINITY;}
    return  distance / fuelConsumed;
}

void clearBuffer(){
    int c = 0;
    while((c = getchar()) != '\n' && c != EOF);
}

int main(){
    double distance = 0;
    double fuelConsumed = 0;

    printf("Digite a distancia total: ");
    scanf("%lf", &distance);
    printf("Digite o gasto total de combustivel: ");
    scanf("%lf", &fuelConsumed);
    printf("O consumo medio foi: %.2lf km/l\n", average(distance, fuelConsumed));

    return 0;
}