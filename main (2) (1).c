#include <stdio.h>
#include <math.h>

int main()
{
    int x,y;
    double f;
    printf(" x | y  | f(x,y)\n");
    printf("=================\n");
    for(x=2; x<=8;x+=2)
    {
        for (y=6; y<=21; y+=3){
            f= (pow(x,2)-pow(y,2)) / (pow(x,2)+pow(y,2));
            printf("%d \t %d \t %0.3f\n", x,y, f);
        }
    }

    return 0;
}