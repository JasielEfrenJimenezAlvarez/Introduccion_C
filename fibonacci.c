#include <stdio.h>

int fibonacci(int n){
if(n==1)
{return 1;}
if(n==2)
{return 1;}
if(n==0)
{return 0;}

return fibonacci(n-1)+fibonacci(n-2);

}
 main()
{
int j;
printf("Ingresa el número: ");
scanf("%d",&j);

int i=fibonacci(j);

printf("El fibonacci es: %d\n",i);
printf("\n");

}
