#include <iostream>
#include <graphics.h>
using namespace std;
main()
{
    srand(time(NULL));
    initwindow(800,600);
    int x1=400,x2=400,x3=400,y1=300,y2=320,y3=340,r=0,ax,ay,code,xg=(rand()%40)*20,yg=(rand()%30)*20,done=1;
    while(done>0){
        if(kbhit()==1){
            code=getch();
            setcolor(0);
            circle(x1,y1,10);
            circle(x2,y2,10);
            circle(x3,y3,10);
            circle(xg,yg,10);
            ax=x1;
            ay=y1;
            if ((code==119)&&(ay-20!=y2))        r=0;
            else if ((code==115)&&(ay+20!=y2))   r=1;
            else if ((code==97)&&(ax-20!=x2))    r=2;
            else if ((code==100)&&(ax+20!=x2))   r=3;
            else{
                ax=x1;
                ay=y1;
                x1=x2;
                y1=y2;
                x2=x3;
                y2=y3;
            }
        }
        else{
            setcolor(0);
            circle(x1,y1,10);
            circle(x2,y2,10);
            circle(x3,y3,10);
            circle(xg,yg,10);
            ax=x1;
            ay=y1;
            r=rand()%4;
        }
        if ((r==0)&&(ay-20!=y2))        ay-=20;
        else if ((r==1)&&(ay+20!=y2))   ay+=20;
        else if ((r==2)&&(ax-20!=x2))   ax-=20;
        else if ((r==3)&&(ax+20!=x2))   ax+=20;
        else{
            ax=x1;
            ay=y1;
            x1=x2;
            y1=y2;
            x2=x3;
            y2=y3;
        }
        x3=x2;
        y3=y2;
        x2=x1;
        y2=y1;
        x1=ax;
        y1=ay;
        //cout<<x1<<"\t"<<x2<<"\t"<<x3<<"\t"<<y1<<"\t"<<y2<<"\t"<<y3<<"\t"<<endl;
        if(x1==xg && y1==yg){
            xg=(rand()%40)*20;
            yg=(rand()%30)*20;
        }
        if(x1<0 || x1>800 || y1<0 || y1>600)  done=0;
        setcolor(15);
        circle(x1,y1,10);
        circle(x2,y2,10);
        circle(x3,y3,10);
        setcolor(4);
        circle(xg,yg,10);
        delay(100);
    }
    cout << "Game Over.......!!!!!!!!!!!!!!!!";
	getch();
}
