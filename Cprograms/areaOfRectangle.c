#include<stdio.h>

int areaOfRect(int length, int breadth)
{
int area=length*breadth;
return area;
}
int main()
{
    int l=10;
    int b=5;
    int area=areaOfRect(l,b);
    printf("%d",area);
    


}