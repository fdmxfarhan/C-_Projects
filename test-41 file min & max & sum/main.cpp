#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
main()
{
    int a[100],sum=0,mux=0,mid=0,l;
    ifstream in;
    in.open("test.txt",ios::in);
    for(l=0;!in.eof();l++)  in>>a[l];
    in.close();
    for(int i=0;i<l;i++)    sum+=a[i];
    for(int i=0;i<l;i++){
        if (a[i]>mux)   mux=a[i];
    }
	cout<<"sum:"<<sum<<endl;
    cout<<"mid:"<<sum/l<<endl;
    cout<<"mux:"<<mux<<endl;
    getch();
}
