#include <iostream>
#include <graphics.h>
using namespace std;
void fil(int x,int y)
{
    int color=getpixel(x,y);
    if(color==15) return;
    if(color==0) putpixel(x,y,15);
    //delay(1);
    fil(x-1,y);
    fil(x,y-1);
    fil(x+1,y);
    fil(x,y+1);

}
main()
{
    initwindow(800,600);
    int a[200];
    circle(400,300,100);
    rectangle(50,50,200,100);
    delay(1000);
    fil(55,55);
    fil(400,201);
	getch();
}
