#include <iostream>
#include <graphics.h>
using namespace std;
int fib(int n){
    if(n==1)      return 1;
    else if(n==2) return 1;
    else          return fib(n-1)+fib(n-2);
}
main()
{
    int n;
    cin >> n;
    initwindow(800,600);
    for(int i=0;i<=n;i++){
        circle(400,300,fib(i));
        getch();
    }
	getch();
}
