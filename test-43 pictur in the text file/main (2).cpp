#include <iostream>
#include <graphics.h>
#include <fstream>
using namespace std;
main()
{
    initwindow(200,200);
    fillellipse(100,100,50,50);
    ofstream out;
    int arr1[200][200],cnt0=0;
    out.open("test.txt",ios::out);
    for(int i=0;i<200;i++){
        for (int j=0;j<200;j++) arr1[i][j]=getpixel(i,j);
    }
    for(int i=0;i<200;i++){
        for (int j=0;j<200;j++) cout<<arr1[i][j];
    }
    for(int i=0;i<200;i++){
        for (int j=0;j<200;j++){
            cnt0=0;
            if(arr1[i][j]==arr1[i][j+1]==0){
                for(int t=0;arr1[i][j]==arr1[i][j+t];t++){
                    cnt0++;
                }
                out<<"0*"<<cnt0<<" ";
            }
            cnt0=0;
            if(arr1[i][j]==arr1[i][j+1]==15){
                for(int t=0;arr1[i][j]==arr1[i][j+t];t++){
                    cnt0++;
                }
                out<<"1*"<<cnt0<<" ";
            }
        }
        out<<endl;
    }
	getch();
}
