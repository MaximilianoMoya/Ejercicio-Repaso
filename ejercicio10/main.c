#include <stdio.h>
#include <stdlib.h>
/*Al presionar el botón pedir números hasta que el usuario quiera, mostrar:
1-Suma de los negativos.
2-Suma de los positivos.
3-Cantidad de positivos.
4-Cantidad de negativos.
5-Cantidad de ceros.
6-Cantidad de números pares.
7-Promedio de positivos.
8-Promedios de negativos.
9-Diferencia entre positivos y negativos, (positvos-negativos).*/

int main()
{
    int numero;
    int acumNegativos = 0;
    int acumPositivos = 0;
    int contNegativos = 0;
    int contPositivos = 0;
    int contCeros = 0;
    int contPares = 0;
    float promedioPos= 0;
    float promedioNeg = 0;
    char respuesta = 's';
    int maximo;
    int minimo;
    int diferencia;

    printf("Ingrese un numero");
    scanf("%d", &numero);

    do
    {
        if(numero > 0)
        {
            contPositivos++;
            acumPositivos=acumPositivos+numero;
        }
        else if(numero < 0)
        {
            contNegativos++;
            acumNegativos=acumNegativos+numero;
        }
        else
        {
            contCeros++;
        }

        if (numero % 2 == 0)
        {
            contPares++;
        }

        printf("Desea continuar? (s/n)");
        fflush(stdin);
        scanf("%c", &respuesta);

    }
    while(respuesta==1);


    if(contNegativos != 0)
    {
        promedioNeg=acumNegativos/contNegativos;
    }
    if(contPositivos != 0)
    {
        promedioPos=acumPositivos/contPositivos;
    }

    diferencia=contPositivos-contNegativos;

    printf("Suma de los negativos: "+ acumNegativos);
    printf("Suma de los positivos: "+ acumPositivos);
    printf("Cantidad de positivos: "+ contPositivos);
    printf("Cantidad de negativos: "+ contNegativos);
    printf("Cantidad de ceros: "+ contCeros);
    printf("Cantidad de numeros pares: "+ contPares);
    printf("Promedio de positivos: "+ promedioPos);
    printf("Promedio de negativos: "+ promedioNeg);
    printf("Diferencia entre positivos y negativos: "+ diferencia);


    return 0;
}
