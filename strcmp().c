/*W.A.P. to compare two strings using strcmp()*/
#include<stdio.h>
#include<string.h>

void main()
{
	char str1[20], str2[20];
	int i;
	printf("Enter two strings : ");
	scanf("%s %s", &str1, &str2);
	i=strcmp(str1, str2);
	if(i==0)
	{
		printf("Both strings are same : %d", i);
	}
	else
	{
		printf("Both strings are not same : %d", i);
	}
}
