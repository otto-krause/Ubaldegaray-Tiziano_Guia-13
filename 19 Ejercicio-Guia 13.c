#include <stdio.h>
#include <stdlib.h>


int main()
{
    int anios[15], J=0, K=0, I=0;

    printf("Ingresar 15 anios (de 4 digitos y no repetir): \n");
    for(J=0;J<15;J++)
    {
        printf("Anio %d: ", J+1);
        scanf("%d", &anios[J]);

        for(K=0;K<J;K++)
        {
            if (anios[J]==anios[K])
            {
                printf("No se puede ingresar un anio repetido\n");
                J--;
                break;
            }
        }

        if (anios[J]<999||anios[J]>9999)
        {
            printf("No se puede ingresar un anio mayor o menor a 4 digitos\n");
            J--;
        }
    }

    system("cls");

    printf("Los anios bisiestos son:\n");

    for (I=0;I<15;I++)
    {
        if (anios[I]%4==0&&anios[I]%100!=0||anios[I]%400==0)
        {
        printf("%d\n", anios[I]);
        }
    }
}
