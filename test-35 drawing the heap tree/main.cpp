#include <iostream>
#include <graphics.h>
#include <math.h>
#include <stdio.h>
using namespace std;
int height(int l){
    int n=1;
    while (true){
        if(pow(2,n)>=l) return n;
        n++;
    }
}
main()
{
    int heap[200],len,x[200][200],y[200][200],k=0;
    cout<<"heap chandtayi mikhay..??  ";
    cin>>len;
    for(int i=0;i<len;i++){
        cout<<"khoone shomare "<<i<<" ro bede: ";
        cin>>heap[i];
    }
    int h=height(len),w=pow(2,height(len-1));
    const char chr;
    cout<<h<<w;
    initwindow((w+1)*100,h*50+50);
    for(int i=0,arr=0;i<h;i++){
        k=((w+1)*100)/(pow(2,i)+1);
        for(int j=k;j<(w+1)*100;j+=k){
            circle(j,i*50+50,20);
            chr=heap[arr];
            outtextxy(j,i*50+50,chr);
            arr++;
        }
    }
	getch();
}
