
#include <stdio.h>
#include <stdbool.h>

int verificarPrimo(int n)
{
    int den=2, divisores=0;
    for(den=2; den<n; den++){
        if (n%den==0){
            divisores++;
        }
    }
    if(divisores==0)
    return 1;
    else
    return 0;
}
int main(){
    int num;
    printf("ingresa el número: ");
    scanf("%d", &num);
    int resultado = verificarPrimo(num);
    if(resultado==1)
        printf("El %d es primo \n", num);
    else
        printf("El %d no es primo \n", num);
    printf("bye");
}