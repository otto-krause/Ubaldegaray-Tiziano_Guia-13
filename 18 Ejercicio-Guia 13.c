#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a[10], K=0, L=0, I=0, J=0;

    int num_res(int* a)
    {
        for (L=0;L<9;L++)
        {
            if(a[L] == a[L+1])
            {
                if(L==8)
                {
                    return 1;
                }
                continue;
            }
        break;
        }

        for (K=0;K<9;K++)
        {
            if(a[K] < a[K+1])
            {
            if(K==8)
            {
                return 2;
            }
            continue;
        }
        break;
        }

        for(J=0;J<9;J++)
        {
            if(a[J] > a[J+1])
            {
            if(J==8)
            {
                return 3;
            }
            continue;
        }
        break;
        }
        return 4;
    }

    for(I=0;I<10;I++)
    {
        printf("Ingresar el numero (%d): ", I+1);
        scanf("%d", &a[I]);
    }

    system("cls");

    printf("Se mostrara en pantalla el numero: \n1: si todos sus elementos son iguales. \n2: si todos sus elementos estan en orden estrictamente creciente.\n3: si todos sus elementos estan en orden estrictamente decreciente. \n4: en otro caso.\n");
    printf("\nEntonces, el numero es: %d", num_res(a));
    return 0;
}
