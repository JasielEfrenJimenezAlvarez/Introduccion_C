#include <stdio.h>

main(){

int n=5;
int fila;
int columna;
int j,i;
for(fila=0;fila<n;fila++)
{

for(j=0;j<fila;j++)
{
printf(" ");
  

}


for(i=0;i<n-fila;i++)
{
printf("*");

}

printf("\n");
}
}
