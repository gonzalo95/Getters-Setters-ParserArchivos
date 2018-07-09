#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "ArrayList.h"
#include "parser.h"
#include "estructura.h"

int lectura(ArrayList* lista)
{

    /*
    char entero[5];
    char string[50];
    char decimal[10];
    */

    char string[50];

    estructura* aux;
    int retorno = -1;
    FILE* archivo = fopen("csv.txt", "r");
    if(lista != NULL && archivo != NULL)
    {
        while(!feof(archivo))
        {
            aux = nuevoEstructura();

            /*
            fscanf(archivo, "%[^,],%[^,],%[^\n]\n", entero, string, decimal);
            setEntero(aux, atoi(id));
            setString(aux, nombre);
            setFloat(aux, atof(sueldo));

            lista->add(lista, aux);
            */


            fgets(string, 50, archivo);
            setEntero(aux, atoi(strtok(string, ",")));
            setString(aux, strtok(NULL, ","));
            setFloat(aux, atof(strtok(NULL, ",")));

            lista->add(lista, aux);



        }
        retorno = 1;
        fclose(archivo);
    }
    return retorno;
}


int escritura(ArrayList* lista)
{
    estructura* aux;
    int i;
    int retorno = -1;
    FILE* archivo = fopen("out.csv","w");
    if( lista != NULL && archivo != NULL)
    {
        for(i = 0; i < lista->len(lista); i++)
        {
            aux = lista->get(lista, i);
            fprintf(archivo, "%d,%s,%.2f\n", getEntero(aux), getString(aux), getFloat(aux));
        }
        retorno = 1;
        fclose(archivo);
    }
    return retorno;
}
