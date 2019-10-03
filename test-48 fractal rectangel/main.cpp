#include <iostream>
#include <graphics.h>
using namespace std;
void rectfractal(int n,int x3,int y3,int x4,int y4){
    rectangle(x3,y3,x4,y4);
    if (n>1){
        int l=(x4-x3-9)/2;
        rectfractal(n-1,x3+3,y3+3,x3+3+l,y3+3+l);
        rectfractal(n-1,x3+l+9,y3+3,x4-3,y4-9-l);
        rectfractal(n-1,x3+3,y3+l+9,x3+l+3,y4-3);
        rectfractal(n-1,x4-3-l,y4-3-l,x4-3,y4-3);
    }
}
main()
{
    while(true){
    int n,x1=10,y1=10,x2=500,y2=500;
    cout<<"======================================"<<endl<<"            welcome"<<endl<<"======================================"<<endl<<endl<<"type the number of the fractal: ";
    cin>>n;
    initwindow(800,600);
    rectfractal(n,x1,y1,x2,y2);
	getch();
    }
}
