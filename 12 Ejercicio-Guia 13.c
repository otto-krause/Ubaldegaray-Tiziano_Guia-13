#include <stdio.h>
#include <stdlib.h>


int main()
{
    int vec1[20];

    for(int I=0;I<20;I++)
    {
        printf("ingrese un numero (%d): ", I+1);
        scanf("%d", &vec1[I]);
    }

    int aux;

    for(int J=0;J<20;J++)
    {
        for(int I=0;I<20;I++)
        {
            if(vec1[I]>vec1[I+1])
            {
                aux=vec1[I];
                vec1[I]=vec1[I+1];
                vec1[I+1]=aux;
            }
        }
    }

    int vec2[20];

    for(int I=0;I<20;I++)
    {
        vec2[I]=vec1[19-I];
    }

    int vec3[20];

    for(int I=0;I<20;I++)
    {
        vec3[I]=vec2[I]*vec1[I];
    }

    void mostrar(int* num)
    {
        printf("Vector: ");
        for(int I=0;I<20;I++)
        {
            printf("%d ", num[I]);
        }
        printf("\n");
    }

    system("cls");

    mostrar(vec1);
    mostrar(vec2);
    mostrar(vec3);
}
