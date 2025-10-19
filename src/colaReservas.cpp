#include "../include/colaReservas.h"

struct rep_colaReservas
{
  // Completar
  rep_colaReservas *sig;
  rep_colaReservas *primero;
  rep_colaReservas *ultimo;
};

TColaReservas crearTColaReservas()
{
  TColaReservas q = new rep_colaReservas;
  q->primero = NULL;
  q->ultimo = NULL;
  return q;
}

void encolarTColaReservas(TColaReservas &colaReservas, TReserva reserva)
{
  rep_colaReservas *nuevo = new rep_colaReservas;
  nuevo->sig = NULL;

  if (colaReservas->primero == NULL)
  {
    colaReservas->primero = nuevo;
  }
  else
    colaReservas->ultimo->sig = nuevo;

  colaReservas->ultimo = nuevo;
}

void desencolarTColaReservas(TColaReservas &colaReservas)
{
  while (colaReservas->primero != NULL)
  {
    colaReservas->primero = colaReservas->primero->sig;
    //colaReservas->primero;
  }
}

TReserva frenteTColaReservas(TColaReservas colaReservas)
{
  return NULL;
}

nat cantidadTColaReservas(TColaReservas colaReservas)
{
  return 0;
}

void imprimirTColaReservas(TColaReservas colaReservas)
{
}

void liberarTColaReservas(TColaReservas &colaReservas)
{
}

TReserva extraerFrenteTColaReservas(TColaReservas &colaReservas)
{
  return NULL;
}
