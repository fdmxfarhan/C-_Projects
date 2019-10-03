#include <iostream>
#include <graphics.h>
#include <conio.h>
using namespace std;
int main()
{
    initwindow(800,600);
    int code,x=400,y=300;
    code=getch();
    cout << code;
    setcolor(2);
    setfillstyle(1,2);
    circle(x,y,10);
    while (true){
        code=getch();
        if (code==119){
            setcolor(0);
            circle(x,y,10);
            y-=1;
        }
        else if (code==115){
            setcolor(0);
            circle(x,y,10);
            y+=1;
        }
        else if (code==97){
            setcolor(0);
            circle(x,y,10);
            x-=1;
        }
        else if (code==100){
            setcolor(0);
            circle(x,y,10);
            x+=1;
        }
        setcolor(2);
        circle(x,y,10);
    }
	getch();
	return 0;
}
