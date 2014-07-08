#include <stdio.h>

main(){
int fila,columna;
int n=5;

for(fila=1;fila<=n;fila++)
{

	for(columna=0;columna<(n-fila);columna++)
	{
	printf(" ");
	}

	for(columna=0;columna<fila;columna++)
	{
	printf("*");
	}
	printf("\n");

}
}
