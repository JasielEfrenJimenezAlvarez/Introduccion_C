#include <stdio.h>

main(){
int n=5;
int fila; 
int columna;
for (fila=0; fila < n;fila++)
{
	for(columna=0; columna <(n-fila);columna++)
	{
		printf("*");
	}
	printf("\n");
}
}
