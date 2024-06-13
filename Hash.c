//
// Created by usuario on 13/6/2024.
//

#include "Hash.h"

void InicializarTabla(char *tabla[])
{
    int i=0;
    for(i; i < Tam ; i++)
    {
    tabla[i] = NULL;
    }
}

int Hashing(char *nombre)
{
    int pos=0;
    for(int i=0;nombre[i] != '\0';i++)
    {
        pos+= nombre[i];
    }
    return pos % Tam;
}

void Agreagar(char *tabla[], char *nombre)
{
    int pos= Hashing(nombre);
    while (tabla[pos]!=NULL)
    {
        pos = (pos + 1)%Tam; //redispercion
    }
    tabla[pos]=nombre;
}

void Mostrar(char *tabla[])
{
    for(int i=0;i < Tam;i++)
    {
        printf("Nombre: %s Posicion: %d\n", tabla[i], i);
    }
}
