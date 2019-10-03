#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    char a[200];
    int cnt=0;
    while(true){
        cin.getline(a,200);
        for(int i=0;i<14;i++){
            if(a[i]<'Z' && a[i]>'A' && a[i-1]==' ' && a[i+2]!=' ') cnt++;

        }
        cout<<cnt<<endl;
    }
	getch();
}
