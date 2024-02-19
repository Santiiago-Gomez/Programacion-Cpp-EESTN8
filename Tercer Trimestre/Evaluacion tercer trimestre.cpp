#include <stdio.h>
#include <conio.h>
#include <windows.h>

// evaluacion de degastaldi
// gomez santiago y cicero antonella 6to 2da
float sumaserie (int,int);
float sumaparalelo(float x, float y);
int main () {
	int componente, r1, r2, c1, c2, i1, i2, insistir=0;
	int total;
	float totalp, r1p, r2p, c1p, c2p, i1p, i2p;
	while(insistir==0) {
printf ("Ingrese 1 para resistencias serie:\n");
printf ("Ingrese 2 para resistencias en paralelo:\n");
printf ("Ingrese 3 para capacitores serie:\n");
printf ("Ingrese 4 para capacitores paralelo:\n");
printf ("Ingrese 5 para inductores serie:\n");
printf ("Ingrese 6 para inductores paralelo:\n");
printf ("Ingrese 7 para salir:\n");
printf ("Indique el numero del componente el cual desea asociar: ");
	scanf ("%d",&componente);
	switch (componente) {
		case 1: {
			printf ("ingrese el valor de la resistencia 1: ");
	scanf ("%d",&r1);
	printf ("ingrese el valor de la resistencia 2: ");
	scanf ("%d",&r2);
		total= sumaserie (r1,r2);
		printf ("La RT es: %d\n", total);
			break;
		}
		case 4: {
			printf ("ingrese el valor del capacitor 1: ");
	scanf ("%d",&c1);
	printf ("ingrese el valor del capacitor 2: ");
	scanf ("%d",&c2);
		total= sumaserie (c1,c2);
		printf ("La CT es: %d\n", total);
			break;
		}
		case 5: {
			printf ("ingrese el valor del inductor 1: ");
	scanf ("%d",&i1);
	printf ("ingrese el valor del inductor 2: ");
	scanf ("%d",&i2);
		total= sumaserie (i1,i2);
		printf ("La IT es: %d\n", total);
			break;
		}
		case 2: {
			printf ("ingrese el valor de la resistencia 1: ");
	scanf ("%g",&r1p);
	printf ("ingrese el valor de la resistencia 2: ");
	scanf ("%g",&r2p);
		totalp= sumaparalelo (r1p,r2p);
		printf ("La RT es: %g\n", totalp);
			break;
		}
		case 3: {
			printf ("ingrese el valor del capacitor 1: ");
	scanf ("%g",&c1p);
	printf ("ingrese el valor del capacitor 2: ");
	scanf ("%g",&c2p);
		totalp= sumaparalelo (c1p,c2p);
		printf ("La CT es: %g\n", totalp);
			break;
		}
		case 6: {
			printf ("ingrese el valor del inductor 1: ");
	scanf ("%g",&i1p);
	printf ("ingrese el valor del inductor 2: ");
	scanf ("%g",&i2p);
		totalp= sumaparalelo (i1p,i2p);
		printf ("La IT es: %g\n", totalp);
			break;
		}
		case 7: {
			insistir=1;
			printf ("nos vemos");
			break;
		}
	}
}
}
float sumaserie (int r, int rr) {
	static float suma;
	suma= r+rr;
	return suma;
}
float sumaparalelo(float x, float y){
	static float totalp;
	totalp=(x*y) / (x+y);
	return totalp;
}

