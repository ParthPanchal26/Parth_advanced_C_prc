/*W.a.p. to initialize and print two dimensional integer array*/
#include<stdio.h>

void main()
{
	int n[3][2]={1, 4, 2, 5, 3, 6};
	int i, j;
	for(i=0;i<3;i++)	//for row
	{
		for(j=0;j<2;j++)	//for column
		{
			printf("%d ", n[i][j]);
		}
		printf("\n");
	}
}
