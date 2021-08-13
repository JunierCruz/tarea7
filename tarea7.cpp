#include<stdio.h>

 int main
 	()
{
	
	int num,k,mayor=0;
printf("Introducir los 10 numeros: ");

for(k=1;k<=10;k++)
{
	scanf("%d",&num);
	if (num>mayor)mayor=num;
	
}

printf("Este es el numero mayor: %d",mayor);
	
	
	
	
	return 0;
}
