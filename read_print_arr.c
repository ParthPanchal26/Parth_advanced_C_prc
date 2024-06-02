/*Write a program to demonstrate  that how to read and print the one dimensional integer array*/
#include<stdio.h>


void main()
{
	int n[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("Enter array element n[%d] : ", i);
		scanf("%d", &n[i]);
	}
	printf("\narray contain :");
	for(i=0;i<3;i++)
	{
		printf(" %d", n[i]);
	}
}
