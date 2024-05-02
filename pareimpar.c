#include <stdio.h>

int main() {
    int n, i, j, es_primo;
    
    printf("Introduce un número para encontrar los números primos hasta ese límite: ");
    scanf("%d", &n);
    
    printf("Números primos hasta %d:\n", n);
    
    for(i = 2; i <= n; ++i) {
        es_primo = 1;
        
        for(j = 2; j <= i / 2; ++j) {
            if(i % j == 0) {
                es_primo = 0;
                break;
            }
        }
        
        if(es_primo)
            printf("%d ", i);
    }
    
    return 0;
}
