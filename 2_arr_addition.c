/*To add two integer array into third array*/
#include<stdio.h>

void main()
{
	int a[2][2], b[2][2], c[2][2];
	int i, j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter two elements for a[%d][%d] & b[%d][%d] : ", i, j, i, j);
			system("color 2E");
			scanf("%d %d", &a[i][j], &b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nAdition of matrix a & b is : \n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d", c[i][j]);
		}
		printf("\n");
	}
}
