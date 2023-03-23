#include <stdio.h>

int main()
{
    float real[4][4];
    int i, j, cont;
    float somapar, somaimpar;
    float media;
    somaimpar = 0;
    somapar = 0;
    cont = 0;
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\nDigite aqui os números: ");
            scanf("%f", &real[i][j]);
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++)
        {
            if(j % 2 == 0)
        {
             somapar = somapar + real[i][j];
             cont = cont + 1;
        }
        else {
            somaimpar - somaimpar + real[i][j];
        }
      }
   }
   media = somaimpar/cont;
   printf("\n A soma dos valores das colunas impares e %f", somaimpar);
   printf("\n A media dos valores das colunas pares e %f", media);
}

    