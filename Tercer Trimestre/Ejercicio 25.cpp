#include <stdio.h>
#include <conio.h>
#include <windows.h>
// Gomez Santiago, Abrego Mauricio 6to 2da
// Realice un programa en donde se almacene 10 edades, 10 alturas, y 10 pesos 
// y se los devuelva después ordenado de mayor a menor
float burbujeo (float[]);
int main () {
	float edades [10], alturas [10], pesos [10];
	int i;
	for (i=0; i<10; i++) {
		printf ("\nIngrese edad: ");
		scanf ("%f",&edades[i]);
	}
	system ("cls");
	edades[0]=burbujeo (edades);
	for (i=0; i<10; i++) {
		printf ("\nIngrese altura: ");
		scanf ("%f",&alturas[i]);
	}
	system ("cls");
	alturas[0]=burbujeo (alturas);
	for (i=0; i<10; i++) {
		printf ("\nIngrese pesos: ");
		scanf ("%f",&pesos[i]);
	}
	system ("cls");
	pesos[0]=burbujeo (pesos); //fin ingresos
	
	printf ("\nEdades: \n");
	for (i=0; i<10; i++) {
		printf ("%g",edades[i]);
	}
	printf ("\nAlturas: \n");
	for (i=0; i<10; i++) {
		printf ("%g",alturas[i]);
	}
	printf ("\nPesos: \n");
	for (i=0; i<10; i++) {
		printf ("%g",pesos[i]);
	}
} //fin primera parte
float burbujeo (float x[]) {
	int i, j;
	float aux;
	for (i=0; i<10; i++) {
		for (j=i; j<10; j++) {
			if (x[i]<x[j]) {
				aux=x[j];
				x[j]=x[i];
				x[i]=aux;
			}
		}
	}
	return x[0];
}
