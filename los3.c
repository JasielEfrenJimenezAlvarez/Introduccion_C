#include <stdio.h>

void imprimir()
{

printf("Hola mundo con funciones\n");
}


int suma(int a, int b){

return a+b;

}


int factorial(int n)
{
if(n==0)
{return 1;

}
else
{return n*factorial(n-1);
}

}


main()
{
int i,a,b;
printf("1.-Imprimir\n2.-Suma\n3.-Factorial\n");
scanf("%d",&i);
if(i==1)
{
imprimir();
}
if(i==2)
{
printf("Ingresa el primer número\n");
scanf("%d",&a);
printf("Ingresa el segundo número\n");
scanf("%d",&b);
printf("El resultado es: \n");
printf("%d",suma(a,b));
printf("\n");
}
if(i==3)
{
printf("Ingresa un número\n");
scanf("%d",&a);
printf("El resultado es: \n");
printf("%d",factorial(a));
printf("\n");
}
}
