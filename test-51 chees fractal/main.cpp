#include <iostream>
#include <graphics.h>
using namespace std;
void chees(int n,int x1,int y1,int x2,int y2){
    //rectangle(x1,y1,x2,y2);
    if(n==1){
        bar(x1,y1,x2,y2);
    }
    else {
        int l=(x2-x1)/3;
        chees(n-1,x1,y1,x1+l,y1+l);
        chees(n-1,x1+l+l,y1,x1+l+l+l,y1+l);
        chees(n-1,x1,y1+l+l,x1+l,y1+l+l+l);
        chees(n-1,x1+l,y1+l,x1+l+l,y1+l+l);
        chees(n-1,x1+l+l,y1+l+l,x1+l+l+l,y1+l+l+l);
    }
}
main()
{
    initwindow(800,600);
    while(true){
        int n,x1=10,y1=10,x2=500,y2=500;
        cout<<"======================================"<<endl<<"            welcome"<<endl<<"======================================"<<endl<<endl<<"type the number of the fractal: ";
        cin>>n;
        chees(n,x1,y1,x2,y2);
        getch();
    }
}
