#include <stdio.h>
#include <math.h>
// Gomez Santiago, Abrego Mauricio 6to 2da
//Realice un programa con funciones en donde se calculen las 3 potencias de un circuito senoidal.
float square (float x, float y);
main(){	
	float vf,r,l,c,f,xl,xc,i,z;
	float s,p,ql,qt,qc;
	printf(" Ingrese VF: ");
	scanf("%f",&vf);
	printf("\n Ingrese F: ");
	scanf("%f",&f);
	printf("\n Ingrese R: ");
	scanf("%f",&r);
	printf("\n Ingrese L: ");
	scanf("%f",&l);
	printf("\n Ingrese C: ");
	scanf("%f",&c);
	xl=2*3.14*f*l;
	xc=1/(2*314*f*c);
	z=sqrt((r*r)+((xl-xc)*(xl-xc)));
	i=vf/z;
	p=square(i,r);
	ql=square(i,xl);
	qc=square(i,xc);
	qt=ql-qc;
	s=square(i,z);
	printf("\n P= %g",p);
	printf("\n QL= %g",ql);
	printf("\n QC= %g",qc);
	printf("\n QT= %g",qt);
	printf("\n S= %g",s);	
}
float square (float x, float y){
	float z,ib;
	ib=x*x;
	z=ib*y;
	return z;
}
