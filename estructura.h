typedef struct
{
    int entero;
    char string[20];
    float decimal;
}estructura;

estructura* nuevoEmpleado();

int setEntero(estructura*, int);

int getEntero(estructura*);

int setString(estructura*, char*);

char* getString(estructura*);

int setFloat(estructura*, float);

float getFloat(estructura*);

void imprimir(estructura*);
