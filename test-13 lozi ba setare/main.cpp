#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    for(int i=0,j=n;i<=n &&j>0;j--,i++){
        for(int k=0;k<j;k++){
            cout<<" ";
        }
        for(int l=0;l<i*2;l++){
            cout<<"*";
        }
        cout<<endl;
    }
	getch();
}
