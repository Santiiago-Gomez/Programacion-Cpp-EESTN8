#include <stdio.h>
#include <conio.h>
#include <windows.h>
// Gomez Santiago, 6to 2da
// Ejercicio 4: Realice un programa donde una persona puede asociar 2 resistencias
// en serie o en paralelo.
main () {
int Santi,r1s,r2s,rts;
float r1p,r2p,rtp;
printf ("Programa de asociacion de resistencias\n");
printf ("Ingrese un 1 si la suma es en serie o un 2 si la desea en paraleo: ");
scanf ("%d",&Santi);
if (Santi==1) {
	printf ("Ingrese r1: ");
    scanf ("%d",&r1s);
    printf ("Ingrese r2: ");
    scanf ("%d",&r2s);
	rts=r1s+r2s;
	printf ("El resultado de la suma es:%d",rts);
	}
if (Santi==2) {
	printf ("Ingrese r1: ");
    scanf ("%g",&r1p);
    printf ("Ingrese r2: ");
    scanf ("%g",&r2p);
	rtp=(r1p*r2p) / (r1p+r2p);
	printf ("El resultado de la asociacion es:%g",rtp);
}
    getch ();
    return 0;
}
