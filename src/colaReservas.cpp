#include "../include/colaReservas.h"

struct rep_nodo_reserva
{
  TReserva reserva;
  rep_nodo_reserva *siguiente;
};
typedef rep_nodo_reserva *TNodoReserva;

struct rep_colaReservas
{
  nat cardinal;
  TNodoReserva primero;
  TNodoReserva ultimo;
};

TColaReservas crearTColaReservas()
{
  TColaReservas q = new rep_colaReservas;
  q->primero = NULL;
  q->ultimo = NULL;
  q->cardinal = 0;
  return q;
}

void encolarTColaReservas(TColaReservas &colaReservas, TReserva reserva)
{
  TNodoReserva nuevo = new rep_nodo_reserva;
  nuevo->reserva = reserva;
  nuevo->siguiente = NULL;

  if (colaReservas->primero == NULL)
  {
    colaReservas->primero = nuevo;
    colaReservas->ultimo = nuevo;
  }
  else
  {
    colaReservas->ultimo->siguiente = nuevo;
    colaReservas->ultimo = nuevo;
  }
  colaReservas->cardinal++;
}

void desencolarTColaReservas(TColaReservas &colaReservas)
{
  while (colaReservas->primero != NULL)
  {
    colaReservas->primero = colaReservas->primero->siguiente;
    // colaReservas->primero;
  }
}

TReserva frenteTColaReservas(TColaReservas colaReservas)
{
  return NULL;
}

nat cantidadTColaReservas(TColaReservas colaReservas)
{
  return colaReservas->cardinal;
}

void imprimirTColaReservas(TColaReservas colaReservas)
{
}

void liberarTColaReservas(TColaReservas &colaReservas)
{
  TNodoReserva actual = colaReservas->primero;
  TNodoReserva aBorrar;
  while (actual != NULL)
  {
    aBorrar = actual;
    actual = actual->siguiente;
    liberarTReserva(aBorrar->reserva);
    delete aBorrar;
  }
  delete colaReservas;
  colaReservas = NULL;
}

void liberarTColaReservasSoloEstructura(TColaReservas &colaReservas)
{
  
}

TReserva extraerFrenteTColaReservas(TColaReservas &colaReservas)
{
  return NULL;
}
