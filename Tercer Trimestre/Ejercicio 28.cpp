#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
// Gomez Santiago, Abrego Mauricio 6to 2da
//Declarar 2 vectores, mandar uno a la funcion, devolverlo y guardarlo en otro vector.
float vector(float[]);
int I=-1;
main(){
	int i;
	float x[5];
	float y[5];
	for(i=0;i<5;i++){
		scanf("%f",&y[i]);
	}
	
	for(i=0;i<5;i++){
		x[i]=vector(y);		
	}
	x[0]=vector(y);
	
	for(i=0;i<5;i++){
		printf("\n %g",x[i]);
	}
}

float vector (float a[]){
	I++;
	return a[I];
}
