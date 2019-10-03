#include <iostream>
#include <graphics.h>
using namespace std;
int a[20][20];
/*void fil(int x1,int y1)
{
    setcolor(15);
    if(a[x1/10][y1/10]==1) return;
    if(a[x1/10][y1/10]==0) a[x1/10][y1/10]=2;
    //delay(1);
    fil(x1+10,y1);
    fil(x1,y1+10);
    fil(x1-10,y1);
    fil(x1,y1-10);
}*/
void fil(int x,int y)
{
    if(a[x/50][y/50]==1 || x>500 || y>500) return;
    if(a[x/50][y/50]==0)
    {
        a[x/50][y/50]=0;
        setfillstyle(1,15);
        bar(x-25,y-25,x+25,y+25);
        a[x/50][y/50]=2;
        fil(x+50,y);
        fil(x,y+50);
        fil(x-50,y);
        fil(x,y-50);
    }
    return;

}
main()
{
    srand(time(NULL));
    initwindow(500,500);

    for(int i=0;i<=10;i++)
    {
        for (int j=0;j<=10;j++)
        {
            setcolor(14);
            line(i*50,j*50,(i+1)*50,j*50);
            line(i*50,j*50,i*50,(j+1)*50);
            setcolor(15);
        }
    }
    int r,t1;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            r=rand()%2;
            a[i][j]=r;
        }
    }
    /*for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(a[i][j]==1) bar(i*50,j*50,(i+1)*50,(j+1)*50);
        }
    }*/
    char* ch;

    while(true){
        while (!kbhit()){
            if(ismouseclick(WM_LBUTTONDOWN)){
                int x=mousex();
                int y=mousey();
                x=x-(x%50)+25;
                y=y-(y%50)+25;

                if(a[x/50][y/50]==1)
                {
                    setfillstyle(1,4);
                    bar(x-25,y-25,x+25,y+25);
                    setfillstyle(1,15);
                    //exit(0);
                }
                fil(x,y);
                clearmouseclick(WM_LBUTTONDOWN);
            }
            for(int i=0;i<=10;i++)
            {
                for (int j=0;j<=10;j++)
                {
                    setcolor(14);
                    line(i*50,j*50,(i+1)*50,j*50);
                    line(i*50,j*50,i*50,(j+1)*50);
                    setcolor(15);
                }
            }
            system("CLS");
            for(int i=0;i<=10;i++)
            {
                for (int j=0;j<=10;j++)
                {
                    if (a[i][j]==2)
                    {
                        t1=0;
                        for(int i2=-1;i2<2;i2++)
                        {
                            for(int j2=-1;j2<2;j2++)
                            {
                                if (a[i+i2][j+j2]==1)t1++;
                            }
                        }
                        if (t1!=0)
                        {
                            settextstyle(10,0,2);
                            ch=new char;
                            *ch=t1+'0';
                            outtextxy((i*50)+5,(j*50)+5,"   ");
                            outtextxy((i*50)+5,(j*50)+5,ch);
                            delete ch;
                        }
                    }
                }
            }
        }

        for(int i=0;i<=10;i++)
        {
            for (int j=0;j<=10;j++)
            {
                if(a[i][j]==2) bar(i*50,j*50,(i+1)*50,(j+1)*50);
            }
        }
        getch();
    }
	getch();
}
