#include <stdio.h>
#include <stdlib.h>


int main()
{
    int nums[6], I=0, J=0;

    for(I=0;I<6;I++)
    {
        printf("Ingresar un numero: ");
        scanf("%d", &nums[I]);
    }

    system("cls");

    for (J=0;J<6;J++)
    {
        if (nums[J]%2==0)
        {
            printf("Posicion: %d\n", nums[I]+1);
        }
    }
}
