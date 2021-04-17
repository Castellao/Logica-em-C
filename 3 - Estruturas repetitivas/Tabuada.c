#include <stdio.h>
#include <stdlib.h>

int main()
{
   int valor, resultado, tabuada;

   printf("Deseja a tabuada para qual valor? ");
   scanf("%d", &valor);

   for(tabuada = 0; tabuada <= 10; tabuada++){
    resultado = valor * tabuada;
    printf("%d X %d = %d\n", valor, tabuada, resultado);
   }

    return 0;
}
