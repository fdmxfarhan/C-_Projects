#include <iostream>
#include <graphics.h>
#include <fstream>
using namespace std;
main()
{
    int i=0,j=0,a=0,b=0;
    initwindow(300,300);
    fillellipse(150,150,50,50);
    ofstream out;
    out.open("test.txt",ios::out);
    a=getpixel(0,0);
    for(int i=0;i<200;i++){
        for(int j=0;j<200;j++){
            if(getpixel(i,j)==a) b=b+1;
            if(getpixel(i,j)!=a){
                out<<a<<"*"<<b<<" ";
                cout<<a<<"*"<<b<<" ";
                b=1;
            }
            a=getpixel(i,j);
        }
    }
	getch();
}
