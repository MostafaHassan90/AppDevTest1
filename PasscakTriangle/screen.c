#include<stdio.h>
void setFGcolor(int colorcode){
	printf("\x1b[%dm", colorcode);
	fflush(stdout);
}
void clearScreen(void) {
	printf("\x1b[2J");
	fflush(stdout);
 }
void gotoXY(int row, int col) {
	printf("\x1b[%d;%dH", row, col);
	fflush(stdout);
}