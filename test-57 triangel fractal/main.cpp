#include <iostream>
#include <graphics.h>
#include <math.h>
using namespace std;
void trl(int x1,int y1,int x2,int y2,int x3,int y3,int n)
{
    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x2,y2,x3,y3);
    if (n==0) return;
    int l=x2-x1;
    trl(x1,y1,x2-l/2,y2,x3-l/4,y3+l/4,n-1);
    trl(x1+l/2,y1,x2,y2,x3+l/4,y3+l/4,n-1);
    trl(x3-l/4,y3+l/4,x3+l/4,y3+l/4,x3,y3,n-1);
}
main()
{
    initwindow(800,600);
    trl(300,350,500,350,400,250,4);
	getch();
}
