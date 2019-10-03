#define _WIN32_WINNT 0x0500
#include <iostream>
#include <graphics.h>
using namespace std;
main()
{
    srand(time(NULL));
    initwindow(800,600);
    int bx[10000]={400,400},by[10000]={300,320},r=0,ax,ay,code,xg=(rand()%40)*20,yg=(rand()%30)*20,done=1,len=2,c;
    while(done>0){
        if(kbhit()==1)   code=getch();
        setcolor(0);
        setfillstyle(1,0);
        for(int i=0;i<len;i++) fillellipse(bx[i],by[i],10,10);
        ax=bx[0];
        ay=by[0];
        if      ((code==119)&&(ay-20!=by[1]))   r=0;
        else if ((code==115)&&(ay+20!=by[1]))   r=1;
        else if  ((code==97)&&(ax-20!=bx[1]))   r=2;
        else if ((code==100)&&(ax+20!=bx[1]))   r=3;
        else if (code==32)                      len++;
        if      ((r==0)&&(ay-20!=by[1]))        ay-=20;
        else if ((r==1)&&(ay+20!=by[1]))        ay+=20;
        else if ((r==2)&&(ax-20!=bx[1]))        ax-=20;
        else if ((r==3)&&(ax+20!=bx[1]))        ax+=20;
        for(int i=len-1;i>0;i--){
            bx[i]=bx[i-1];
            by[i]=by[i-1];
        }
        bx[0]=ax;
        by[0]=ay;
        if(bx[0]==xg && by[0]==yg){
            len++;
            xg=(rand()%40)*20;
            yg=(rand()%30)*20;
        }
        setcolor(2);
        setfillstyle(1,2);
        for(int i=0;i<100;i++) fillellipse(bx[i],by[i],10,10);
        setcolor(4);
        setfillstyle(1,4);
        fillellipse(xg,yg,10,10);
        if(bx[0]<0 || bx[0]>800 || by[0]<0 || by[0]>600)  done=0;
        for(int i=1;i<len;i++){
            if(bx[0]==bx[i] && by[0]==by[i])  done=0;
        }
        delay(100);
    }
    cout << "Game Over.......!!!!!!!!!!!!!!!!";
	getch();
}
