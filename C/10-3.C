#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float ang;
    char trig;

printf("Digite s - SENO c - Cosseno t - Tangente\n" );
scanf( "%c", &trig );

switch ( trig ) {
case 's': printf("Informe o angulo:\n");
          scanf("%f", &ang);
          printf("Seno de %.2f = %.2f \n", ang, sin(ang));
          break;
case 'c': printf("Informe o angulo:\n");
          scanf("%f", &ang);
          printf("Cosseno de %.2f = %.2f \n", ang, cos(ang));
          break;
case 't': printf("Informe o angulo:\n");
          scanf("%f", &ang);
          printf("Tangente de %.2f = %.2f \n", ang, tan(ang));
          break;
default: printf( "Operação invalida" );
}
          return 0;
}

