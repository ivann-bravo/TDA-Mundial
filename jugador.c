/*-------------------------
 | jugador.c
 | Alumno: Ivan Bravo
-------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jugador.h"

struct _Jugador{
    char nombre[30];
    int numeroCamiseta;
    float puntaje;
};

/*-----------------
|     Setters      |
-----------------*/

void setNombreJugador(Jugador jugador, char nuevoNombre[30]){
    strcpy(jugador->nombre, nuevoNombre);
}

void setNumeroCamisetaJugador(Jugador jugador, int nuevoNumeroCamiseta){
    jugador->numeroCamiseta = nuevoNumeroCamiseta;
}

void setPuntajeJugador(Jugador jugador, float nuevoPuntaje){
    jugador->puntaje = nuevoPuntaje;
}

/*------------------
|     Getters      |
------------------*/

char * getNombreJugador(Jugador jugador){
    return jugador->nombre;
}

int getCamiseta(Jugador jugador){
    return jugador->numeroCamiseta;
}

/*------------------------------
|     Funciones de Jugador     |
------------------------------*/

// Constructor
Jugador creaJugador(char nom[30], int numc, float p){

    Jugador jugador = malloc(sizeof(struct _Jugador));

    strcpy(jugador->nombre, nom);
    jugador->numeroCamiseta = numc;
    jugador->puntaje = p;

    return jugador;
}

Jugador inicializarJugador(){
    return creaJugador("",-1,-1);
}

Jugador cargarJugador(){
    char nom[30];
    int numc;
    float p;

    printf("\nIngrese nombre del jugador: ");
    fflush(stdin);
    gets(nom);

    printf("\nIngrese numero de camiseta para %s: ", nom);
    scanf("%d", &numc);

    printf("\nIngrese puntaje para %s: ", nom);
    scanf("%f", &p);

    return creaJugador(nom,numc,p);
}

void mostrarJugador(Jugador jugador){

    if(jugador->numeroCamiseta != -1){
        printf("\nJugador:");
        printf("\n\t- Nombre: %s", jugador->nombre);
        printf("\n\t- Numero de camiseta: %d", jugador->numeroCamiseta);
        printf("\n\t- Puntaje: %.2f", jugador->puntaje);
    }
}
