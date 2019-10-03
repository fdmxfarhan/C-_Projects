#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int a,b,i;
    while(1){
        cin >> a >> b;
        if (a<b)   i=a;
        else       i=b;
        while(a%i!=0 || b%i!=0){
            i-=1;
        }
        cout<<"bmm:"<<i<<endl;
        if (a>b)   i=a;
        else       i=b;
        while(i%a!=0 || i%b!=0){
            i+=1;
        }
        cout<<"kmm:"<<i<<endl;
    }
	getch();
}
