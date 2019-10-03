#include <iostream>
#include <graphics.h>
using namespace std;
main()
{
    srand(time(NULL));
    initwindow(800,600);
    int code,xt=400,xball=400,yball=300,xs=3,ys=-3;
    while (true){
        if (kbhit())  code=getch();
        else code=false;
        setfillstyle(1,0);
        setcolor(0);
        bar(xt-60,545,xt+60,555);
        setfillstyle(1,0);
        setcolor(0);
        fillellipse(xball,yball,25,25);
        if(code=='a')        xt-=20;
        else if(code=='d')   xt+=20;
        if (xball<=20 || xball>=780) xs=-xs;
        else if (yball<=20)               ys=-ys;
        else if (xball<=xt+60 && xball>=xt-60 && yball>=525 && yball<535)  ys=-ys;
        xball+=xs;
        yball+=ys;
        setfillstyle(1,3);
        setcolor(3);
        fillellipse(xball,yball,20,20);
        setfillstyle(1,2);
        setcolor(2);
        bar(xt-60,545,xt+60,555);
        delay(10);
    }
	getch();
}
