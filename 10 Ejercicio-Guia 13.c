#include<stdio.h>
#include<stdlib.h>


int main()
{
    int Nums[11]={0}, Opr[4]={0}, I=0;

    printf("Ingrese diez numeros:\n");

    for (I=1; I<=10; I++)
    {
        scanf("%d", &Nums[I]);
    }

    Opr[2]=1;
    for (I=1; I<=10; I++)
    {
        Opr[1]=Opr[1]+Nums[I];
        Opr[2]=Opr[2]*Nums[I];
        Opr[3]=Opr[1]/10;
    }
    for (I=1; I<=10; I++)
    {
        if (Nums[I]<Opr[3])
        {
            Opr[0]+=1;
        }
    }

    printf("La suma del vector es de: %d\nSu producto de: %d\nY su promedio de: %d", Opr[1], Opr[2], Opr[3]);
    printf("\nLa cantidad de numeros por debajo del promedio es de: %d", Opr[0]);
    return 0;
}
