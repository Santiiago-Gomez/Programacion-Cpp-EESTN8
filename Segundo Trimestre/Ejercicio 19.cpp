#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

// Gomez Santiago, Cicero Antonella 6to 2da
// Ej 19:Realizar un programa en donde se puede ingresar en un vector bidimensional
// las 3 mediciones de temperaturas diarias de los 7 dias de la semana. 
// se pide calcular el promedio y que al final devuelva las 3 mediciones junto
// con el promedio de cada dia ordenado de mayor a menor.

main () 
{
	float temp [7][4], aux;
	int i,k,l;
	int dia [7] = {1,2,3,4,5,6,7};
	for (i=0; i<7; i++) {
		for (k=0; k<3; k++) {
			printf ("dia %d, temp %d: ", i+1, k+1);
			scanf ("%f", &temp [i][k]);
		}
		temp [i][3] =(temp [i][0]+temp [i][1]+temp [i][2]) / 3;
	}
	for (i=0; i<6; i++) {
		for (k=0; k<6; k++) {
			if (temp [k][3]<temp [k+1][3]) {
				for (l=0; l<4; i++) {
					aux= temp [k][l];
					temp [k][l] = temp [k+1][l];
					temp [k+1][l] = aux;
				}
				aux= dia [k];
				dia [k] = dia [k+1];
				dia [k+1] = aux;
			}
		}
	}
	system ("cls");
	printf ("dias ordenados por promedio de temp. \n");
	for (i=0; i<7; i++) {
		printf ("dia: %d\n t1: %f\n t2: %f\n t3: %f\n tprom: %f\n\n", dia [i], temp [i][0], temp [i][1], temp [i][2], temp [i][3]);
	}
	system ("pause");
}
