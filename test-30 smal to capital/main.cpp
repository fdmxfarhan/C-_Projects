#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    char a[200];
    while(true){
        cin.getline(a,200);
        a[0]-=32;
        for(int i=0;i<14;i++){
            if(a[i]==' ') a[i+1]-=32;
        }
        cout<<a<<endl;
    }
	getch();
}
