#include <iostream>
#include <graphics.h>
using namespace std;
void draw(char shape,int x1,int y1)
{
    if (shape=='X')
    {
        line(x1-90,y1-90,x1+90,y1+90);
        line(x1-90,y1+90,x1+90,y1-90);
    }
    else if(shape=='O')
        circle(x1,y1,90);
}
main()
{
    system("color a");
    int arr1[3][3],nobat=1;
    initwindow(600,600);
    setcolor(14);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            arr1[i][j]=0;
        line(0,i*200,600,i*200);
        line(i*200,0,i*200,600);
    }
    setcolor(15);
    while (!kbhit())
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            int x=mousex();
            int y=mousey();
            x=x-(x%200)+100;
            y=y-(y%200)+100;
            if(arr1[x/200][y/200]==0)
            {
                if(nobat==1)
                {
                    draw('X',x,y);
                    nobat=2;
                    arr1[x/200][y/200]=1;
                }
                else if(nobat==2)
                {
                    draw('O',x,y);
                    nobat=1;
                    arr1[x/200][y/200]=2;
                }
            }
            clearmouseclick(WM_LBUTTONDOWN);
        }
        for(int i=0;i<3;i++)
        {
            if((arr1[i][0]==arr1[i][1] && arr1[i][1]==arr1[i][2] && arr1[i][0]>0)||(arr1[0][i]==arr1[1][i] && arr1[1][i]==arr1[2][i] && arr1[0][i]>0)||(arr1[0][0]==arr1[1][1] && arr1[1][1]==arr1[2][2] && arr1[0][0]>0)||(arr1[0][2]==arr1[1][1] && arr1[1][1]==arr1[2][0] && arr1[0][2]>0))
            {
                cout<<endl<<"_____________________"<<endl<<"You win...!!!"<<endl<<"_____________________";
                exit(0);
            }
        }
    }
	getch();
}
