/*To find out maximum value from integer array*/
#include<stdio.h>

void main()
{
	int n[2][3];
	int i, j, max=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value for n[%d][%d] : ", i, j);
			system("color 7F");
			scanf("%d", &n[i][j]);
		}
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(max < n[i][j])
			{
				max = n[i][j];
			}
		}
	}
	printf("\nMaximum is : %d", max);
}
