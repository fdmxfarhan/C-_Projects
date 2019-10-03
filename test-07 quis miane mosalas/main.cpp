#include <iostream>
#include <graphics.h>
using namespace std;
main()
{
    initwindow(800,600);
    int xa,ya,xb,yb,xc,yc,xab,yab,xac,yac,xbc,ybc;

    cin >>xa;
    cin >>ya;
    cin >>xb;
    cin >>yb;
    cin >>xc;
    cin >>yc;
    setcolor(15);
    line(xa,ya,xb,yb);
    line(xa,ya,xc,yc);
    line(xb,yb,xc,yc);
    xab=(xa+xb)/2;
    yab=(ya+yb)/2;
    xac=(xa+xc)/2;
    yac=(ya+yc)/2;
    xbc=(xb+xc)/2;
    ybc=(yb+yc)/2;
    setcolor(2);
    line(xab,yab,xc,yc);
    line(xac,yac,xb,yb);
    line(xbc,ybc,xa,ya);
	getch();
}
