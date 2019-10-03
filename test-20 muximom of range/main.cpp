#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    srand(time(NULL));
    int a[100],b,c;
    for(int i=0;i<100;i++)    a[i]=rand();
    b=a[0];
    for(int i=0;i<100;i++){
        if(a[i]>=b)  b=a[i];
    }
    cout<<b;
	getch();
}
