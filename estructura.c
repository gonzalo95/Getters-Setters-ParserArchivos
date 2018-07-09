#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructura.h"


estructura* nuevoEstructura()
{
    estructura* nuevo = (estructura*) malloc(sizeof(estructura));
    return nuevo;
}

int setEntero(estructura* estructura, int entero)
{
    int retorno = -1;
    if(estructura != NULL && entero > 0)
    {
        estructura->entero = entero;
        retorno = 1;
    }
    return retorno;
}

int getEntero(estructura* estructura)
{
    int retorno = -1;
    if(estructura != NULL)
    {
        retorno = estructura->entero;
    }
    return retorno;
}

int setString(estructura* estructura, char* string)
{
    int retorno = -1;
    if(estructura != NULL && string != NULL)
    {
        strcpy(estructura->string, string);
        retorno = 1;
    }
    return retorno;
}

char* getString(estructura* estructura)
{
    char* retorno = NULL;
    if(estructura != NULL)
    {
        retorno = estructura->string;
    }
    return retorno;
}

int setFloat(estructura* estructura, float decimal)
{
    int retorno = -1;
    if(estructura != NULL && decimal > 0)
    {
        estructura->decimal = decimal;
        retorno = 1;
    }
    return retorno;
}

float getFloat(estructura* estructura)
{
    float retorno = -1;
    if(estructura != NULL)
    {
        retorno = estructura->decimal;
    }
    return retorno;
}

void imprimir(estructura* estructura)
{
    if(estructura != NULL)
    {
        printf("ENTERO: %d  --  STRING: %s  --  DECIMAL: %.2f\n", getEntero(estructura), getString(estructura), getFloat(estructura));
    }
}
