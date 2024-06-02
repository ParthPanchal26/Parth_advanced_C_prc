/*Write a program to demonstrate the formatted string output*/
#include<stdio.h>

void main()
{
	char name[20]="computer";
	printf("%s\n", name);
	printf("%12s", name);
	printf("\n%12.3s", name);
}
