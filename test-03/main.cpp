#include <iostream>
#include <GRAPHICS.H>
using namespace std;
main()
{
    initwindow(800,600);
    setcolor(2);
    rectangle(250,200,450,500);
    rectangle(300,400,450,500);
    circle(300,350,30);
    circle(300,350,5);
    circle(350,150,30);
    line(250,200,350,100);
    line(450,200,350,100);
    line(350,100,600,50);
    line(450,200,700,150);
    line(700,150,600,50);
    line(700,150,700,450);
    line(700,450,450,500);

	getch();
}
