#include <stdio.h>
#include <stdlib.h>
#include "math.h"


float multiplicacion(float operadorUno, float operadorDos)
 {
    float resultadoMultiplicacion;
    resultadoMultiplicacion=operadorUno*operadorDos;
    return resultadoMultiplicacion;
}
float division(float operadorUno, float operadorDos)
{
    float resultadoDivision;
    resultadoDivision=operadorUno/operadorDos;
    return resultadoDivision;
}
float resta(float operadorUno, float operadorDos)
{
    float resultadoResta;
    resultadoResta=operadorUno-operadorDos;
    return resultadoResta;
}
float suma(float operadorUno, float operadorDos)
{
    float resultadoSuma;
    resultadoSuma=operadorUno+operadorDos;
    return resultadoSuma;
}









/*por cada biblioteca que hagamos tenemos que rear dos archivos, uno .C y el otro .H,
TENEMOS QUE INCLUIR MATH.H (O EL NOMBRE DE LA BIBLIOTECA .H O .C) PARA QUE VAYA A BUSCAR LA INFO EN ESA LIBRERIA
INGRESAMOS A NEW > FILE > EMPTY FILE, LE AGREGAMOS NOMBRE Y LE DAMOS A SAVE. (MATH.C  = EJ)
AGREGAMOS OTRO, VAMOS A FILE, EMPTY FILE, Y CREAMOS MATH.H
EN EL .H van a estar TODAS LAS FIRMAS
EN EL .C TODO LO QUE ESTA POR DEBAJO DE MAIN, O SEA, LA IMPLEMENTACION

ENTRE COMILLAS "" ES UN ARCHIVO QUE ESTA LOCALMENTE
ENTRE <> ES UN ARCHIVO QUE ESTA EN C

O SINO

FILE > NEW > FILE > C HEADER y crea dos archivos
*/
