#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define N 5
main ()
{
	int j=0, m=0, k=0;
	int MODA=0;
	int vec[5], i; 
	printf ("Ingrese la cantidad de numeros: ");
	for (i=0; i<N-1; i++) {
		scanf ("%d",&vec[i]);
		k++;
		if (vec[i]==vec[i+1]) {
			m++;
			if (j<m) {
				j=m;
				MODA= vec[i];
			}
		if (k>m) {
			k=0;
			m=0;
		}	
		}
	}
	printf ("La moda es: %d",MODA);
}
