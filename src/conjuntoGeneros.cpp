#include "../include/conjuntoGeneros.h"

struct rep_conjuntogeneros
{
  int *ids;
  int cantActual;
  int cantMax;
};

TConjuntoGeneros crearTConjuntoGeneros(int cantMax)
{
  TConjuntoGeneros nuevo = new rep_conjuntogeneros;
  nuevo->ids = new int[cantMax];
  nuevo->cantActual = 0;
  nuevo->cantMax = cantMax;
  return nuevo;
}

bool esVacioTConjuntoGeneros(TConjuntoGeneros c)
{
  if (c == NULL)
  {
    return true;
  }
  return false;
}

void insertarTConjuntoGeneros(TConjuntoGeneros &c, int id)
{
}

void borrarDeTConjuntoGeneros(TConjuntoGeneros &c, int id)
{
}

bool perteneceTConjuntoGeneros(TConjuntoGeneros c, int id)
{
  return true;
}

int cardinalTConjuntoGeneros(TConjuntoGeneros c)
{
  return 0;
}

int cantMaxTConjuntoGeneros(TConjuntoGeneros c)
{
  return 0;
}

void imprimirTConjuntoGeneros(TConjuntoGeneros c)
{
}

void liberarTConjuntoGeneros(TConjuntoGeneros &c)
{
  delete[] c->ids;
  delete c;
  c = NULL;
}

TConjuntoGeneros unionTConjuntoGeneros(TConjuntoGeneros c1, TConjuntoGeneros c2)
{
  return NULL;
}

TConjuntoGeneros interseccionTConjuntoGeneros(TConjuntoGeneros c1, TConjuntoGeneros c2)
{
  return NULL;
}

TConjuntoGeneros diferenciaTConjuntoGeneros(TConjuntoGeneros c1, TConjuntoGeneros c2)
{
  return NULL;
}
