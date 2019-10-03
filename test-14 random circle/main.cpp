#include <iostream>
#include <graphics.h>
using namespace std;
main()
{
    srand(time(NULL));
    initwindow(800,600);
    int x,y,z;
    while(true){
        x=rand()%800;
        y=rand()%600;
        z=rand()%50;
        setcolor(rand()%15);
        circle((int) x,(int) y,(int) z);
        delay(1);
    }
	getch();
}
