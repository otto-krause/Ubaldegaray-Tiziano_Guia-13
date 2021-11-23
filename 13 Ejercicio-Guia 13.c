#include <stdio.h>
#include <stdlib.h>


int main()
{
    int nums[6], I=0, J=0;

    for(I=0;I<6;I++)
    {
        printf("ingresar un numero: ");
        scanf("%d", &nums[I]);
    }

    system("cls");

    for (J=1;J<=6;J++)
    {
        if (J%2==0)
        {
            printf("%d ", nums[I]);
        }
    }
    return 0;
}
