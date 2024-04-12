#include <stdio.h>
int main(){
    int i;
    int j;
    int m;
    printf("Tabla de pitagoras \n\n");
    printf("x\t|1\t|2\t|3\t|4\t|5\t|6\t|7\t|8\t|9\t|10\t|\n");
    
    for(i=1;i<11;i++){
        printf("%d\t|",i);
        for(j=1;j<11;j++){
            m=i*j;
            printf("%d\t|", m);
        }
        printf("\n");
    }
    return 0;
}