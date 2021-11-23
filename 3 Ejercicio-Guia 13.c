#include<stdio.h>
#include<stdlib.h>

int main()
{
	int nums[2]={0};
	printf("ingrese el primer numero\n");
	scanf("%d",&nums[1]);
	printf("ingrese el segundo numero\n");
	scanf("%d",&nums[2]);
	
	if (nums[1]<nums[2])
	{
		nums[1]=nums[1]+1;
		while (nums[1]<nums[2])
		{
			printf("%d ",nums[1]);
			nums[1]=nums[1]+1;
		}
	}
	else
		{
		if (nums[1]>nums[2])
			{
				nums[1]=nums[1]-1;
				while (nums[1]>nums[2])
				{
					printf("%d ",nums[1]);
					nums[1]=nums[1]-1;
				}
			}
		}
		else
			printf("los numeros son iguales");
	
}
