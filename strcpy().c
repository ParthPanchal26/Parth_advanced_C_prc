/*Write a program to copy a string using strcpy()*/
#include<stdio.h>
#include<string.h>

void main()
{
	char str1[20], str2[20];
	printf("Enter  string:");
	scanf("%s", &str1);
	strcpy(str2, str1);
	printf("\nBoth strings are : %s %s", str1, str2);
}
