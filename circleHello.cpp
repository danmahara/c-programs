#include <stdio.h>
#include <string.h>
#include <graphics.h>

int main() {
  int gd = DETECT, gm;
  initgraph(&gd, &gm, NULL);

  int x, y, r;
  printf("Enter x coordinate of center: ");
  scanf("%d", &x);
  printf("Enter y coordinate of center: ");
  scanf("%d", &y);
  printf("Enter radius of circle: ");
  scanf("%d", &r);

// x=250,y=250,r=200;
// circle(200,200,200);
  circle(x, y, r);

  // Calculate x and y position of text
  int text_x = x - (r/2);
  int text_y =y - (r/2);

  // Set text color and print text
  setcolor(RED);
  outtextxy(text_x, text_y,"Dan Mahara");
  
  // outtextxy("Hello");
  
  getch();
  closegraph();

  return 0;
}