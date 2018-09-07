#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include <conio.h>

//Trabajo practico

int main()
{
int flag, opcion;
float numeroUno, numeroDos, resultadoSuma=0, resultadoResta=0, resultadoDivision=0, resultadoMultiplicacion=0;


do
{
    printf("*                             BIENVENIDO!!!                        * \n");                                  /*Ingreso de datos*/
    printf("*                           Menu de opciones                       *\n" );
    printf("--------------------------------------------------------------------\n" );
    printf("1.Ingrese primer operando\n");
    printf("2.Ingresar segundo operando\n");
    printf("3.calculas todas las operaciones\n");
    printf("4.Informar resultados\n");
    printf("5.Salir \n");
    printf("--------------------------------------------------------------------\n" );

    scanf("%d",&opcion);

    switch(opcion)
    {
        case 1:
        printf("Ingrese el primer operando: ");
        scanf("%f", numeroUno);

        break;
        case 2:
        printf("Ingrese el segundo operando: ");
        scanf("%f", numeroDos);
            while(numeroDos==0)
            {
                printf("No se puede dividir por cero. Reingrese el numero por favor: ");
                scanf("%f", numeroDos);
            }
        break;

        case 5:
            flag=0;
            break;

        case 3:
        printf("Calculando...");
        resultadoSuma = suma(numeroUno,numeroDos);
        resultadoResta = resta(numeroUno,numeroDos);
        resultadoDivision = division(numeroUno,numeroDos);
        resultadoMultiplicacion = multiplicacion(numeroUno,numeroDos); //falta el factorial.

        break;
        case 4:
        printf("Resultados...");
        printf("El resultado de la SUMA es es: ",resultadoSuma);
        printf("El resultado de la RESTA es: ",resultadoResta);
        printf("El resultado de la DIVISION es: ",resultadoDivision);
        printf("El resultado de la MULTIPLICACION es: ",resultadoMultiplicacion);

        break;

        case 6:
        printf("Saliendo...");

        break;
        flag = 0;

    default:
        printf("¡Ingrese una opcion valida!\n");
    }


}while(flag !=0);


return 0;
}














//1 2 3 puntos, DO { hacerlos con Do while
//
//4. A B C D


//lucianavarela@hotmail.es
//
