#include <iostream>
#include <graphics.h>
#include <fstream>
using namespace std;
main()
{
    initwindow(200,200);
    fillellipse(100,100,50,50);
    ofstream out;
    out.open("test.txt",ios::out);
    for(int i=0;i<200;i++){
        for (int j=0;j<200;j++) out<<getpixel(i,j)<<" ";
    }
	getch();
}
