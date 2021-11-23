#include <stdio.h>
#include <stdlib.h>


int main()
{
    int  n=0, I=0, K=0, J=0;

    printf("ingresar el valor de n: ");
    scanf("%d", &n);

    int vec1[n];

    for(I=0;I<n;I++)
    {
        scanf("%d", &vec1[I]);
    }

    int vecnv[n];
    int vec[n];

    for (J=0;J<n;J++)
    {
        vec[J]=vecnv[n-1];
    }

    for (K=0;K<n;K++)
    {
        printf("%d ", vecnv[K]);
    }
}
