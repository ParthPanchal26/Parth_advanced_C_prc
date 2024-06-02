/*W.a.p. to demonstrate deletion operation*/
#include<stdio.h>

void main()
{
	int a[50], i, n, pos;
	
	printf("This Program Delete An Element At The place You Want\n____________________________________________________\n");

	printf("\nEnter size of array : \n");
	scanf("%d", &n);

	printf("\nEnter array elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nEnter the position where you want to delete an element : ");
	scanf("%d", &pos);
	
	if(pos>n)
		printf("\nsize is %d so deletion operation can not able to perform :::::::::", n);
	else	
	{
			for(i=pos-1;i<n-1;i++)
			{
				a[i]=a[i+1];	
			}
			printf("\nAfter deletion New array is : \n");
			for(i=0;i<n-1;i++)
			{
				printf("%d\n", a[i]);
			}
	}
}
