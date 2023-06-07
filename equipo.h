/*-------------------------
 | equipo.h
 | Alumno: Ivan Bravo
-------------------------*/

#ifndef EQUIPO_H_INCLUDED
#define EQUIPO_H_INCLUDED

struct _Equipo;

typedef struct _Equipo * Equipo;

/*------------------------------
|     Funciones de Equipo      |
------------------------------*/

/// PRE: Debe existir 'equipo'
/// POST: Devuelve un Equipo con jugadores cargados por teclado
Equipo cargarEquipo();

/// PRE: El equipo debe estar incializado
/// POST: Devuelve toda la informacion del equipo
void mostrarEquipo(Equipo equipo);

/// PRE: Debe exister 'equipo' y tener espacio libre. De lo contrario, no hace nada
/// POST: Agrega un Jugador en la posicion libre
void agregarJugador(Equipo equipo);

/// PRE: Debe existir 'equipo' y contener jugadores cargados
/// POST: Ordena por numero de camiseta
void ordenarJugadoresPorCamiseta(Equipo equipo);

/// PRE: Debe existir 'equipo' y el jugador con el numero de camiseta
/// POST: Se sobreescriben los datos del struct existente por los ingresados nuevamente
void modificarJugadorPorCamiseta(Equipo equipo, int numeroCamiseta);

/// PRE: Debe existir 'equipo' y el jugador con el numero de camiseta
/// POST: Vacia el struct en la posicion que corresponda al que se haya eliminado
void eliminarJugadorPorCamiseta(Equipo equipo, int numeroCamiseta);

#endif // EQUIPO_H_INCLUDED
