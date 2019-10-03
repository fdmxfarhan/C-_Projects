#include <iostream>
#include <conio.h>
using namespace std;
int a[1000]={22,1,657,3,567,34,76,4,32,5};
int darj(int x,int b,int c){
    while(b>c){
        a[b]=a[b-1];
        b=b-1;
    }
    a[c]=x;
}
main()
{
    int b=0,c=0,d=0;
    while(b<10){
        c=0;
        while(c<b){
            if(a[b]<a[c])
                darj(a[b],b,c);
            c=c+1;}
        b=b+1;
    }
    while(d<10){
        cout<<a[d]<<endl;
        d=d+1;

    }
	getch();
}
