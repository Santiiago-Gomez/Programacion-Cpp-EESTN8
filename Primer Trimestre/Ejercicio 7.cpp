#include <stdio.h>
#include <conio.h>
#include <windows.h>
// Gomez Santiago, 6to 2da
// Ejercicio 7: Realice un programa en donde se despliegue un menu de opciones en donde se seleccione uno de los 5 equipos
// de futbol alli exhibidos y luego se despliegue una pantalla con sus datos.
int main () {
	int  a;
	printf ("Los equipos mas grandes de Argentina papa\n");
	printf ("1. Vokita el mas grande\n");
	printf ("2. Y va el tercero\n");
	printf ("3. Indesingente\n");
	printf ("4. Racing Club\n");
	printf ("5. Marcelo Tinelli\n");
	printf ("Elija el equipo que mas le guste padre: ");
	scanf ("%d",&a);
	switch (a) {
		case 1:printf ("Equipo: Vokita el mas grande\n");
		       printf ("Jugadores: Carlitos, Wanchope el santiagueño, Pavon el perro, Dario benemuerto, Lciha Lopez trucho, y Andrada\n");
		       printf ("DT: Alfaro\n");
		       printf ("Copas internacionales: las suficientes");
		       break;
		case 2:printf ("Equipo: Y va el tercero\n");
			   printf ("Jugadores: El oso pratto, Quintero, y va Martinez para el gol\n");
			   printf ("DT: Marcelo Gallardo\n");
			   printf ("Copas internacionales: no importa si ya gano la mas importante\n");
			   break;
		case 3:printf ("Equipo: Indesingente\n");
		       printf ("Jugadores: Alan Manco, Bochini, y no fue lateral\n");
			   printf ("DT: Ariel Holan ndeah\n");
			   printf ("Copas internacionales: ninguna a color\n");
			   break;
		case 4:printf ("Equipo: Racing Club\n");
		       printf ("Jugadores: Licha Dios, Donatti, Arias, y Pillud\n");
			   printf ("DT: Eduardo Coudet\n");
			   printf ("Copas Internacionales: La primera de todas\n");
			   break;
		case 5:printf ("Equipo: Marcelo Tinelli\n");
		       printf ("Jugadores: Ni idea son como 80 colombianos\n");
			   printf ("DT: Almiron\n");
			   printf ("Copas internacionales: una sola creo\n");
			   break;
		default:printf ("Che capo solo hay 5 grandes\n");
		       break;	   	   	   
	}
}
