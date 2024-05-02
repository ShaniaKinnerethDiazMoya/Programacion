#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;
    
    printf("Introduce un número: ");
    scanf("%d", &num);
    
    for(i = 1; i <= num; ++i) {
        factorial *= i;
    }
    
    printf("El factorial de %d es %llu\n", num, factorial);
    
    return 0;
}
