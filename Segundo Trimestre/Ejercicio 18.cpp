#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
// Gomez Santiago, Cicero Antonella 6to 2da
// Ej 18:Realice un juego de preguntas y respuestas.
main(){
	char vec[30];
	printf("Bienvenido al juego de preguntas y respuestas, recuerda usar los espacios como _");
	printf("\nQuien gano la final de la libertadores 2018?");
	scanf("%s",&vec);
	if(strcmp(vec,"Boca_no")==0){
		system("cls");
		printf("\nCuantas copas del mundo tiene Leo Messi?");
		scanf("%s",&vec);
	if(strcmp(vec,"Ninguna")==0){
		system("cls");
		printf("\nQue tipo de elemento manejo en un principio el avatar aang?");
		scanf("%s",&vec);
	if(strcmp(vec,"Aire_control")==0){
		system("cls");
		printf("\nCuantos hijos tiene homero simpson?");
		scanf("%s",&vec);
	if(strcmp(vec,"Tres")==0){
		system("cls");
		printf("\nCuantos integrantes forman la banda The Beatles?");
		scanf("%s",&vec);
	if(strcmp(vec,"Cuatro")==0){
		scanf("cls");
		printf("\nSos crack viejo! Ganaste");
		} else {
			system("cls");
			printf("\nMira si la va a ganar boca jaja");}
		} else {
			system("cls");
			printf("\nSegui soñando");
			}
	}
		} else {
		system("cls");
		printf("\nNo va a ser maestro caca bolude");}
	}  else {
		system("cls");
		printf("\nEstaba dificil igual");}
	}

