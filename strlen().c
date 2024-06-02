/*To find out lenght of given string using strlen()*/
#include<stdio.h>
#include<string.h>

void main()
{
	char str1[20];
	int P;
	printf("Enter string : ");
	scanf("%s", &str1);
	P=strlen(str1);
	printf("\nLenght of given string is : %d", P);
}
