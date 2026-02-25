#include <stdio.h>


static inline int sum(int num1, int num2) {
    return num1 + num2;
}

void clearBuffer(){
    int c = 0;
    while((c = getchar()) != '\n' && c != EOF); 
}

int main(){
    int num1 = 0; 
    int num2 = 0; 
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    printf("Resultado: %d + %d = %d\n", num1, num2, sum(num1, num2));

    return 0;
}


