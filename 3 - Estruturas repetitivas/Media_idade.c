#include <stdio.h>
#include <stdlib.h>

int main()
{

    int idades, soma, quantidade;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idades);

    if(idades < 0){
        printf("IMPOSSIVEL CALCULAR");
    }
    else{
         soma = 0;
         quantidade = 0;
        while(idades >= 0){
            quantidade = quantidade + 1;
            soma = soma + idades;
            scanf("%d", &idades);
        }
        media = (double)soma / quantidade;
        printf("MEDIA = %.2lf\n", media);
    }

    return 0;
}
