
#include <stdio.h>
#include <math.h>

float calcularimc (int peso, float est){
    float r=peso/(est*est);
    return r;
}
void evaluar (float imc)
{
    if(imc<18.5)
        printf("peso bajo \n");
    else if(imc<25) 
        printf("peso normal\n");
    else if(imc<30)
        printf("sobrepeso");
        else
        printf("obesidad");
}

int main()
{
    int peso;
    float est, imc;
    printf("Da el peso: ");
    scanf("%d", &peso);
    printf("da la estatura: ");
    scanf("%f", &est);
    imc=calcularimc(peso, est);
    printf("el indice es  %.2f\n", imc);
    evaluar(imc);
    
}