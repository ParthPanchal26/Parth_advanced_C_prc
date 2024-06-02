/*To read and print two Dimensional array*/
#include<stdio.h>

void main()
{
	int n[3][3];
	int i, j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter element n[%d][%d] : ", i, j);
			system("color E2");
			scanf("%d", &n[i][j]);
		}
	}
	printf("\nEntered values are : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", n[i][j]);
		}
		printf("\n");
	}
}
