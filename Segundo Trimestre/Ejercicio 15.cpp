#include <stdio.h>
#include<conio.h>
#include <windows.h>
#define N 10

// Gomez Santiago, Cicero Antonella 6to 2da
// Ej 15:Se piden ingresar los tiempos de llegada de 10 corredores
// y devolver el orden del mejor tiempo al peor.

main(){
	float vect[N],a;
	int vecnumero[N]={1,2,3,4,5,6,7,8,9,10};
	int i,j;
	for(i=0;i<N;i++){
		printf("Ingrese los tiempos del corredor %d: ",vecnumero[i]);
		scanf("%f",&vect[i]);
	}
	for(i=0;i<N;i++){
		for(j=i;j<N;j++){
			if(vect[i]>vect[j]){
				a=vect[j];
				vect[j]=vect[i];
				vect[i]=a;
				a=vecnumero[j];
				vecnumero[j]=vecnumero[i];
				vecnumero[i]=a;
			}
		}
	}
	for(i=0;i<N;i++){
		printf("\nCorredor %d: ",vecnumero[i]);
		printf("%g",vect[i]);
	}
}
