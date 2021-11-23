#include <stdio.h>
#include <stdlib.h>


void para_escanear(int* nums)
{
    for(int I=0;I<6;I++)
    {
        scanf("%d", &nums[I]);
    }
}

int main()
{
    int vec1[6], vec2[6], n=0;

    printf("Vector numero 1: ");
    para_escanear(vec1);
    printf("Vector numero 2: ");
    para_escanear(vec2);

    printf("ingrese el valor de n: ");
    scanf("%d");

    if(n>6||n<0)
    return 1;

    int vec3[n];

    for (int I=0;I<n;I++)
    {
        vec3[I]=vec1[I]*vec2[n-I*1];
    }

    system("cls");

    for(int I=0;I<6;I++)
    {
        printf("%d ", vec3[I]);
    }
}
