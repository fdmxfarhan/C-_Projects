#include <iostream>
#include <graphics.h>
using namespace std;
main()
{
    initwindow(800,600);
    /*for(int i=0;i<600;i+=20){
        line(0,i,800,i);
    }
    for(int i=0;i<800;i+=20){
        line(i,0,i,600);
    }*/
    for(int i=800,j=0;i>0 && j<800;i-=20,j+=20){
        line(i,0,0,j);
    }
	getch();
}
