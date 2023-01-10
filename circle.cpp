#include<stdio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
							//320 is for moving right and left, 210 is for top padding, third one is for size of circle
	circle(320,210,200);	
	
	getch();
	closegraph();
	
	
	return 0;
}


// ctrl + shift + b to run