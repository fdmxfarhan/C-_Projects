#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int a,b=0;
    cin>>a;
    for(int i=10;i<=a*10;i=i*10){
        cout<< (a%i-b)/(i/10)<<endl;
        b=a%i;

    }
	getch();
}
