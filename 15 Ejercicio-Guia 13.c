#include <stdio.h>
#include <stdlib.h>


int main()
{
    int vec1[10], vec2[10], vec3[10], I=0, J=0, K=0;

    int para_escanear(int* nums)
    {
        for(J=0;J<10;J++)
        {
            scanf("%d", &nums[J]);
        }
    }

    printf("Vector numero 1: ");
    para_escanear(vec2);
    printf("Vector numero 2: ");
    para_escanear(vec1);


    for (I=0;I<10;I++)
    {
        if (I%2==0)
        {
        vec3[I]=vec2[I];
        }

        else
        {
        vec3[I]=vec1[I];
        }
    }

    system("cls");

    for(K=0;K<10;K++)
    {
        printf("%d ", vec3[K]);
    }
}
