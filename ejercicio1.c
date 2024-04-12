#include <stdio.h>
int main(){
    int num;
    int i;
    int sum=0;
    printf("Dade el numero a factorizar");
    scanf("%d", &num);
    for(i=0;i<=num;i++){
        printf("%d ",i );
        sum=sum+i;
    }
    printf("=%d \n", sum);
}