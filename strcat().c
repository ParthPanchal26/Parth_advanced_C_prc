/*To join two string using strcat()*/
#include<stdio.h>
#include<string.h>

void main()
{
	char str1[20], str2[20];
	printf("Enter two strings : ");
	scanf("%s %s", &str1, &str2);
	strcat(str1, " ");
	strcat(str1, str2);
	printf("\nAfter joined string is : %s", str1);
}
