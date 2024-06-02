/*W.a.p. to demonstrate sorting operation using selection sort technique*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int a[7], i, j, t;
	printf("Enter an elements : \n");
	while(i<7)
	{
		scanf("%d", &a[i]);
		i++;
	}
	i=0;
	j=0;
	while(j<6)
	{
		i = j + 1;
		while(i<5)
		{
			if(a[j] > a[i])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;	
			}		
			i++;
		}
		j++;
	}
	i=0;
	printf("\nStored Array : ");
	while(i<7)
	{
		printf("\n%d", a[i]);
		i++;
	}
	getch();
}
