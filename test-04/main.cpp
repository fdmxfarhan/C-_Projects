#include <iostream>
#include <graphics.h>
using namespace std;
main()
{
    initwindow(800,600);
    int x1,y1,x2,y2,x3,y3,m,b,x4,y4,x5,y5;
    cin >> x1 >> y1 >> x2 >> y2;
    line(x1,y1,x2,y2);
    x3=(x1+x2)/2;
    y3=(y1+y2)/2;
    m=(y2-y1)/(x2-x1);
    b=y3-(m*x3);
    m=m-1;
    x4=0;
    y4=(m*x4)+b;
    x5=800;
    y5=(m*x5)+b;
    line(x4,y4,x5,y5);
	getch();
}
