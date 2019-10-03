#include <iostream>
#include <conio.h>
using namespace std;
int aray[10];
int push(int n,int top){
    aray[top]=n;
    top=top+1;
    return top;
}
int pop(int top){
    aray[top-1]=0;
    top=top-1;
    return top;
}
main()
{
    system("color b");
    int top=0,n, a=0;
    cout<<"0->push"<<endl<<"1->pop"<<endl;
    while(a<11){
        cin>>n;
        if(n==1){
            top=pop(top);
            a=a-1;
        }
        else if(n==0){
            cin>>n;
            top=push(n,top);
            a=a+1;
        }
        system("cls");
        cout<<"the array: ";
        for(int i=0;i<top-1;i++)
            cout<<aray[i]<<" , ";
        cout<<aray[top-1]<<endl<<endl<<"0->push"<<endl<<"1->pop"<<endl;
    }
  	getch();
}
