#include <stdio.h>

// Función para la serie aritmética: 1, 4, 7, 10, 13, ...
void serie1(int n) {
    printf("Serie aritmética: ");
    for(int i = 1; i <= n; i += 3) {
        printf("%d ", i);
    }
    printf("\n");
}

// Función para la serie geométrica: 1, 2, 4, 8, 16, ...
void serie2(int n) {
    printf("Serie geométrica: ");
    for(int i = 1; i <= n; i *= 2) {
        printf("%d ", i);
    }
    printf("\n");
}

// Función para la serie con decremento: n, n-1, n-2, ..., 1
void serie3(int n) {
    printf("Serie con decremento: ");
    for(int i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n, opcion;
    
    printf("Bienvenido al programa de series\n");
    
    do {
        printf("Ingresa un valor tope: ");
        scanf("%d", &n);
        
        printf("\n1. Serie aritmetica (1 4 7 10 13 ... )\n");
        printf("2. Serie geometrica ( 1 2 4 8 16 ...)\n");
        printf("3. Serie con decremento (...5 4 3 2 1)\n");
        printf("4. Salir\n");
        printf("\nQue desea desplegar? ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1: 
                serie1(n);
                break;
            case 2: 
                serie2(n);
                break; 
            case 3: 
                serie3(n);
                break;
            case 4:	
                printf("Gracias por usar UDLAP SW Inc.\n");   
                break;
            default: 
                printf("La opcion no es valida\n");
                break;     
        }
        
        printf("\n"); // Línea en blanco para mejor formato
        
    } while(opcion != 4);
    
    return 0;
}