#include<stdlib.h>
#include<stdio.h>

    int  main()
{
   double Resistencia[6];
   printf("Ingrese los valores de 5 resistencias\n");
   for(int I=1; I<=5; I++)
   {
        scanf("%lf", &Resistencia[I]);
   }
   for(int I=1; I<=5; I++)
   {
        Resistencia[0]=Resistencia[0]+Resistencia[I];
   }
   printf("El valor total es de %g", Resistencia[0]);
   return 0;
}
