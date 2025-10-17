#include "../include/biblioteca.h"
#include <assert.h>

struct rep_biblioteca
{
  TABBLibros libros;         // Árbol ABB de libros de la biblioteca
  TSocio socios;         // Lista simplemente enlazada de socios de la biblioteca
  TAGGeneros generos;        // Árbol general de géneros de la biblioteca
  TColaReservas reservas;   // Cola de reservas de la biblioteca
  TLDEPrestamos prestamos;  // Lista doblemente enlazada de préstamos de la biblioteca
};

TBiblioteca crearTBiblioteca()
{
  TBiblioteca nueva = new rep_biblioteca;
  nueva->libros = NULL;
  return nueva;
}

void agregarLibroTBiblioteca(TBiblioteca biblioteca, TLibro libro)
{
}

void agregarSocioTBiblioteca(TBiblioteca biblioteca, TSocio socio)
{
}

void prestarLibroTBiblioteca(TBiblioteca biblioteca, int ciSocio, int isbnLibro, TFecha fechaPrestamo)
{
}

bool disponibleLibroTBiblioteca(TBiblioteca biblioteca, int isbnLibro)
{
  return false;
}

void reservarLibroTBiblioteca(TBiblioteca biblioteca, int ciSocio, int isbnLibro)
{
}

void devolverLibroTBiblioteca(TBiblioteca biblioteca, int ciSocio, int isbnLibro, TFecha fechaPrestamo, TFecha fechaDevolucion)
{
}

void imprimirSociosTBiblioteca(TBiblioteca biblioteca)
{
}

void imprimirLibrosTBiblioteca(TBiblioteca biblioteca)
{
}

void imprimirReservasTBiblioteca(TBiblioteca biblioteca)
{
}

void imprimirPrestamosTBiblioteca(TBiblioteca biblioteca)
{
}

void agregarGeneroABiblioteca(TBiblioteca biblioteca, int idGeneroPadre, int idGenero, const char nombreGenero[MAX_NOMBRE])
{
}

TABBLibros obtenerLibrosDeGenero(TBiblioteca biblioteca, int idGenero)
{
  return NULL;
}

void liberarTBiblioteca(TBiblioteca &biblioteca)
{
  liberarTABBLibros(biblioteca->libros);
  liberarTSocio(biblioteca->socios);
  liberarTAGGeneros(biblioteca->generos);
  liberarTColaReservas(biblioteca->reservas);
  liberarTLDEPrestamos(biblioteca->prestamos);
  delete biblioteca;
  biblioteca = NULL;
}
