/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C program to find the length of string
#include <stdio.h>
#include <string.h>

int main()
{
	char Str[1000];
	int i;

	printf("Enter the String: ");
	scanf("%s", Str);

	for (i = 0; Str[i] != '\0'; ++i);

	printf("Length of Str is %d", i);

	return 0;
}

