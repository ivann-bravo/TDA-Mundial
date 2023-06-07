/*-------------------------
 | mundial.h
 | Alumno: Ivan Bravo
-------------------------*/

#ifndef MUNDIAL_H_INCLUDED
#define MUNDIAL_H_INCLUDED

struct _Mundial;

typedef struct _Mundial * Mundial;

/*------------------------------
|     Funciones de Mundial     |
------------------------------*/

/// PRE: Ninguna
/// POST: Devuelve un Mundial con Equipos y Jugadores cargados
Mundial cargarMundial();

/// PRE: Debe existir 'mundial' y los equipos no contener Jugadores vacios
/// POST: Devuelve toda la informacion de un array de Equipos
void mostrarEquipos(Mundial mundial);

/// PRE: Debe existir 'mundial' y los datos de Equipo y Jugadores deben ser correctos
/// POST: Devuelve toda la informacion correspondiente al Mundial, Equipo y Jugadores
void presentarMundial(Mundial mundial);

#endif // MUNDIAL_H_INCLUDED
