#include <stdio.h>

int main() {
    int num1, num2, suma;
    
    printf("Introduce dos números: ");
    scanf("%d %d", &num1, &num2);
    
    suma = num1 + num2;
    
    printf("La suma es: %d\n", suma);
    
    return 0;
}
