#include "../include/agGeneros.h"
#include <assert.h>

struct rep_agGeneros
{
  int idGenero;
  rep_agGeneros *pH;
  rep_agGeneros *sH;
  char nombreGenero[MAX_NOMBRE];
};

TAGGeneros crearTAGGeneros()
{
  TAGGeneros nuevo = new rep_agGeneros;
  nuevo->idGenero = 0;
  nuevo->pH = NULL;
  nuevo->sH = NULL;
  nuevo->nombreGenero[MAX_NOMBRE - 1] = '\0';

  return nuevo;
}

void insertarGeneroTAGGeneros(TAGGeneros &arbolGeneros, int idGeneroPadre, int idGenero, const char nombreGenero[MAX_NOMBRE])
{
}

void imprimirTAGGeneros(TAGGeneros arbolGeneros)
{
}

void liberarTAGGeneros(TAGGeneros &arbolGeneros)
{
  if (arbolGeneros != NULL)
  {
    liberarTAGGeneros(arbolGeneros->pH);
    liberarTAGGeneros(arbolGeneros->sH);
    delete arbolGeneros;
    arbolGeneros = NULL;
  }
}

bool existeGeneroTAGGeneros(TAGGeneros arbolGeneros, int idGenero)
{
  return false;
}

char *nombreGeneroTAGGeneros(TAGGeneros arbolGeneros, int idGenero)
{
  return NULL;
}

nat alturaTAGGeneros(TAGGeneros arbolGeneros)
{
  return 0;
}

nat cantidadTAGGeneros(TAGGeneros arbolGeneros)
{
  return 0;
}

TAGGeneros obtenerSubarbolTAGGeneros(TAGGeneros arbolGeneros, int idGenero)
{
  return NULL;
}

TConjuntoGeneros obtenerConjuntoGeneros(TAGGeneros arbolGeneros, int idGenero)
{
  return NULL;
}

int obtenerMaxTAGGeneros(TAGGeneros arbolGeneros)
{
  return 0;
}

void removerGeneroTAGGeneros(TAGGeneros &arbolGeneros, int idGenero)
{
}