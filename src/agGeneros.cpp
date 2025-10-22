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

  nuevo->nombreGenero[0] = '\0';
  return nuevo;
}

void insertarGeneroTAGGeneros(TAGGeneros &arbolGeneros, int idGeneroPadre, int idGenero, const char nombreGenero[MAX_NOMBRE])
{
}

void imprimirTAGGeneros(TAGGeneros arbolGeneros)
{
  if (arbolGeneros == NULL || arbolGeneros->idGenero == 0)
  {
    return;
  }
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
  if (arbolGeneros == NULL)
  {
    return false;
  }

  if (idGenero == arbolGeneros->idGenero)
  {
    return true;
  }

  if (existeGeneroTAGGeneros(arbolGeneros->pH, idGenero))
  {
    return true;
  }
  return existeGeneroTAGGeneros(arbolGeneros->sH, idGenero);
}

char *nombreGeneroTAGGeneros(TAGGeneros arbolGeneros, int idGenero)
{
  if (arbolGeneros == NULL)
  {
    return NULL;
  }

  if (idGenero == arbolGeneros->idGenero)
  {
    return arbolGeneros->nombreGenero;
  }

  char *res = nombreGeneroTAGGeneros(arbolGeneros->pH, idGenero);
  if (res != NULL)
  {
    return res;
  }
  return nombreGeneroTAGGeneros(arbolGeneros->sH, idGenero);
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