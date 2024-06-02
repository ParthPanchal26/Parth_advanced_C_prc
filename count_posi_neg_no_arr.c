/*To count the Positive no. and Negetive no. in the array*/
#include<stdio.h>

void main()
{
	int a[3][3];
	int i, j, p, n;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter elements a[%d][%d] : ", i, j);
			system("color 2E");
			scanf("%d", &a[i][j]);
		}
	}
	p=0, n=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>=0)
				p++;
			else
				n++;
		}
	}
	printf("\nPositive numbers are : %d\nNegetive numbers are : %d", p, n);
}
