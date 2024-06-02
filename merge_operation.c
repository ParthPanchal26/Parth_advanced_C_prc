/*w.a.p. to demonstrate use of merge operation and merge two array into third array*/
#include<stdio.h>

void main()
{
	int a[5], b[5], c[10];
	int i, j, k;
	
	printf("Enter elements of A : \n");
	for(i=0;i<5;i++)
		scanf("%d", &a[i]);
	printf("\nEnter elments of B : \n");
	for(i=0;i<5;i++)
		scanf("%d", &b[i]);
	i=0, j=0, k=0;
	for(j=0;j<10;j++)
	{
		if(j%2==0)
			c[j]=a[k++];
		else
			c[j]=b[i++];
	}
	printf("\nMerged array C : ");
	for(i=0;i<10;i++)
	{
		printf("%d \t", &c[i]);		
	}	
}
