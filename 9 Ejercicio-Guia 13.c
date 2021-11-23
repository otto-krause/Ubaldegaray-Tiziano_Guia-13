*9 Ejercicio-Guia 13:*
#include<stdio.h>
#include<stdlib.h> 
int main()
{ 
int Nums[6]={0}, ORD[2]={0}, I=0; 
printf("Ingresar cinco numeros: \n"); 
for (I=1; I<=5; I++) 
{ 
scanf("%d", &Nums[I]); 
} 
for (I=1; I<=5; I++) 
{ 
while (Nums[I]<Nums[I+1]) 
{ 
ORD[0]+=1; 
} 
while (Nums[I]>Nums[I+1]) 
{ 
ORD[1]+=1; 
} 
} 
if (ORD[0]=5) 
{ 
printf("Los numeros fueron ingreados de forma ascendente"); 
} 
else 
{ 
if (ORD[1]=5) 
{ 
printf("Los numeros fueron ingresados de forma descendente"); 
} 
else 
{ 
printf("Los numeros fueron ingresados de forma desordenada"); 
} 
} 
return 0;
}


 #NotasApp