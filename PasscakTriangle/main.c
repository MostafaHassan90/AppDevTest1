#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "screen.h"
#include "pascal.h"

int main() {
	int rows;
	printf("Pascal Triangle\n");
	printf("Enter the of rows: ");
	scanf("%d", &rows);
	//setFGcolor(CYAN);
	clearScreen();
	pascal_triangle(rows);

	//printf("%d", factorial(rows));
	return 0;
}