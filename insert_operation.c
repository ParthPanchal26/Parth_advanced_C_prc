/*W.A.P. to insert an element into the array*/
#include<stdio.h>

void main()
{
	int num[10], n, i, val, pos;
	printf("Enter size of array : ");
	scanf("%d", &n);
	printf("\nEnter array element : ");
	for(i=0;i<=n;i++)
	{
		scanf("%d", &num[i]);
	}
	
	printf("\nEnter an element to insert : ");
	scanf("%d", &val);
	printf("\nEnter position : ");
	scanf("%d", &pos);	
	pos--;
	for(i=n;i!=pos;i--)
	{
		num[i]=num[n-1];
		num[i]=val;
	}
	
	printf("\nArray contain : ");
	for(i=0;i<=n;i++)
	{
		printf("%d\n", num[i]);
	}
}
