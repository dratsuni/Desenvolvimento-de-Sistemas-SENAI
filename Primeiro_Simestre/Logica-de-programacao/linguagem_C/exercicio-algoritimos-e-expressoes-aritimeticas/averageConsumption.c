#include <stdio.h>



void clearBuffer();
double average(double distance, double fuelConsumed);

int main(){
    double distance, fuelConsumed;

    printf("Digite a distancia total: ");
    scanf("%lf", &distance);
    printf("Digite o gasto total de combustivel: ");
    scanf("%lf", &fuelConsumed);

    printf("O consumo medio foi: %.2lf km/l\n", average(distance, fuelConsumed));

    return 0;
}

void clearBuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}


double average(double distance, double fuelConsumed){
    return  distance / fuelConsumed;
}