#include <stdio.h>

void clearBuffer();
int sum(int num1, int num2);

int main(){
    int num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    printf("Resultado: %d + %d = %d\n", num1, num2, sum(num1, num2));

    return 0;
}

void clearBuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF); 
}

int sum(int num1, int num2){
    return num1 + num2;
}