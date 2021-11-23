#include <stdio.h>
#include <stdlib.h>


int main()
{
    int nums[100], reps=0, min=0;

    for(int I=0;I<100;I++)
    {
        scanf("%d", &nums[I]);
    }

    min=100000;

    for(int I=0;I<100;I++)
    {
        reps=0;

        if(min>nums[I])
        {
            min=nums[I];
        }

        for(int J=0;J<100;J++)
        {
            if (nums[I]==nums[J])
            reps++;
        }

        if (reps>1)
        {
            printf("%d se repite %d veces\n", nums[I], reps);
        }
    }

    printf("el valor minimo es %d\n", min);
    return 0;
}
