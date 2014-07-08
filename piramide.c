#include <stdio.h>

main(){
int i,j,columna;
int n=1;
printf("Ingresa el número\n");
scanf("%d",&i);

for (j=1;j<=i;j++)
{
	for(columna=0;columna<(i-j);columna++)
	{
	printf(" ");
	}

	for(columna=0;columna<n;columna++)
	{
	printf("*");
	}
	printf("\n");
	n=n+2;
}

}
