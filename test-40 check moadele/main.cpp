#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
main()
{
    char a[200],h;
    int l,b[200],n=0;
    cin>>a;
    l=strlen(a);
    h=a[0];
    for (int i=0;i<l;i++){
        if (a[i]=="+")  h+=a[i+1];
        else if(a[i]=="-")  h-=a[i+1];
        else if(a[i]=="="){
            if(a[i+1]==h)cout<<"true";
            else    cout<<"false";
        }
    }
	getch();
}
