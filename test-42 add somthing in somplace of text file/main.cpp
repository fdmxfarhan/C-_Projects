#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
main()
{
    char a[100][100],x[100];
    int l;
    cin>>x;
    ifstream in;
    in.open("test.txt",ios::in);
    for(l=0;!in.eof();l++)  in>>a[l];
    in.close();
    ofstream out;
    out.open("test.txt",ios::out);
    for(int i=0;i<=l;i++){
        if(i==0 || i==l/2 ||i==l) out<<x<<endl;
        out<<a[i]<<endl;
    }
    out.close();

	getch();
}
