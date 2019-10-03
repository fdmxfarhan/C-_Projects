#include <iostream>
#include <graphics.h>
using namespace std;
main(){
    int n,x1=0,y1=0,x2=0,y2=599,x3=799,y3=599,x4=799,y4=0,px1=0,py1=0,px2=0,py2=599,px3=799,py3=599,px4=799,py4=0;
    cin>>n;
    rectangle(x1,y1,x4,y4);
    initwindow(800,600);
    setcolor(COLOR(255,255,255));
    for(int i=0;i<n;i++){
        line(x1,y1,x2,y2);
        line(x2,y2,x3,y3);
        line(x3,y3,x4,y4);
        line(x4,y4,x1,y1);
        x1=(px1+px2)/2;
        x2=(px2+px3)/2;
        x3=(px3+px4)/2;
        x4=(px4+px1)/2;
        y1=(py1+py2)/2;
        y2=(py2+py3)/2;
        y3=(py3+py4)/2;
        y4=(py4+py1)/2;
        px1=x1;
        px2=x2;
        px3=x3;
        px4=x4;
        py1=y1;
        py2=y2;
        py3=y3;
        py4=y4;
    }
	getch();
}
