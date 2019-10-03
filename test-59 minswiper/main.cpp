#include <iostream>
#include <graphics.h>
using namespace std;
void fil(int x,int y)
{
    int color=getpixel(x,y);
    if(color==0 || x==0 || y==0 || x==800 || y==600) return;
    if(color==15) putpixel(x,y,0);
    //delay(1);
    fil(x+1,y);
    fil(x,y+1);
    fil(x-1,y);
    fil(x,y-1);
}
main()
{
    srand(time(NULL));
    initwindow(100,100);
    int a[20][20],r;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            r=rand()%2;
            a[i][j]=r;
        }
    }
    /*for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(a[i][j]==1) bar(i*10,j*10,(i+1)*10,(j+1)*10);
        }
    }*/
    while(true){
        while (!kbhit()){
            if(ismouseclick(WM_LBUTTONDOWN)){
                int x=mousex();
                int y=mousey();
                fil(x,y);
                clearmouseclick(WM_LBUTTONDOWN);
            }
        }
        getch();
    }
    getch();
}
