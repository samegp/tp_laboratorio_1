#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int SumarNumeros(float sumandoUno,float sumandoDos)
{
    float suma;
    suma = sumandoUno + sumandoDos;
    return suma;
}
int RestarNumeros(float minuendo ,float sustraendo)
{
    float resta;
    resta = minuendo - sustraendo;
    return resta;
}

int DivisionNumeros(float dividendo, float divisor)
{
    float resto;
    resto = dividendo/divisor;
    return resto;
}
int MultiplicacionNumeros(float factorUno,float factorDos)
{
    float producto;
    producto = factorUno*factorDos;
    return producto;
}


