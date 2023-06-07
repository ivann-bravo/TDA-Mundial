/*-------------------------
 | jugador.h
 | Alumno: Ivan Bravo
-------------------------*/

#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED

struct _Jugador;

typedef struct _Jugador * Jugador;

/*-----------------
|     Setters      |
-----------------*/

void setNombreJugador(Jugador jugador, char nuevoNombre[30]);
void setNumeroCamisetaJugador(Jugador jugador, int nuevoNumeroCamiseta);
void setPuntajeJugador(Jugador jugador, float nuevoPuntaje);

/*------------------
|     Getters      |
------------------*/

char * getNombreJugador(Jugador jugador);
int getCamiseta(Jugador jugador);

/*------------------------------
|     Funciones de Jugador     |
------------------------------*/

 /// PRE: Ninguna
/// POST: Construye y devuelve un Jugador con los parametros indicados
Jugador creaJugador(char nom[30], int numc,float p);

/// PRE: Ninguna
/// POST: Devuelve un Jugador vacio. -> ("",-1,-1)
Jugador inicializarJugador();

/// PRE: Se carga por teclado cada atributo
/// POST: Devuelve un Jugador cargado con nombre, numero y puntaje
Jugador cargarJugador();

/// PRE: Debe existir 'jugador' y estar cargado
/// POST: Devuelve toda la informacion de 'jugador'
void mostrarJugador(Jugador jugador);

#endif // JUGADOR_H_INCLUDED
