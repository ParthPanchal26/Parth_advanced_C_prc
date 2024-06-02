/*W.a.p. to demonstrate search operator fromthe array*/
#include<stdio.h>

void main()
{
	int num[10], n, j, c=0, m;
	printf("Enter size of array : ");
	scanf("%d", &n);
	printf("Enter element : \n");
	for(j=0;j<=n-1;j++)
	{
		scanf("%d", &num[j]);
	}
	printf("\nEnter element to be search : ");
	scanf("%d", &m);
	for(j=0;j<=n-1;j++)
	{
		if(num[j]==m)
		{
			c=1;
			break;
		}
	}
	if(c==0)
	{
		printf("\nNumber not found ..................");
	}
	else
	{
		printf("\nNumber found .......................");
	}
}
