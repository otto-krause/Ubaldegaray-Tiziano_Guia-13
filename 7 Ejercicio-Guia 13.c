#include<stdlib.h>
#include<stdio.h>

    void main()
{
    int Notas[16]={0}, I=0;
    printf("Ingrese la nota de cada uno de los alumnos\n");

    for (I=1; I<=15; I++)
    {
        printf("Alumno %d\n", I);
        scanf("%d", &Notas[I]);
    }
    system("cls");

    printf("Las notas mayores a 8 son:\n");


    for (I=1; I<=15; I++)
    {
        if (Notas[I]>8)
        {
                printf("%d\n", I);
        }
    }
}
