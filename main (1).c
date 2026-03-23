
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a,b,r;
    float buenas=0, malas=0;
    float score;
    srand(time(NULL));
    do{
        a=rand()%10+1;
        b=rand()%10+1;
        printf("\ncuanto es %d por %d: ", a,b);
        scanf("%d", &r);
        if((a*b)==r){
        printf("\ncorrecto");
        buenas++;
        }
        
        else if(r!=0){
        printf("esa no es we, es %d\n", (a*b));
        malas++;
        
        }
        
        
    }
    while (r!=0);
    score = buenas/(malas+buenas)*100;
    printf("calificación: %.1f", score);
    
    

    return 0;
}