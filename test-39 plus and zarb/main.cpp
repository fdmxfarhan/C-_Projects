#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    for (int i=0;i<n/2;i++){
            for (int j=0;j<n/2;j++)   cout<<" ";
            cout<<"*"<<endl;
    }
    for (int i=0;i<n;i++)   cout<<"*";
    cout<<endl;
    for (int i=0;i<n/2;i++){
            for (int j=0;j<n/2;j++)   cout<<" ";
            cout<<"*"<<endl;
    }
    cout<<endl<<"_______________________________"<<endl<<endl;
    for (int i=1;i<n+1;i++){
        for (int j=1;j<n+1;j++){
            if(i==j || i+j==n+1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"_______________________________"<<endl<<endl;
    /*for (int i=1;i<n+1;i++){
        for (int j=1;j<n+1;j++){
            if(i==j || i+j==n+1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }*/
	getch();
}
