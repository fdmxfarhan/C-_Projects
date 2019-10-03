#include <iostream>
#include <conio.h>
using namespace std;
int top=0,n, a=0;
int len=5;
int *aray=new int[len];
int push(int n,int top){
    if(len<top)
    {
        len*=2;
        int arr1[len];
        for(int i=0;i<len;i++)  arr1[i]=aray[i];
        aray=new int[len*2];
        for(int i=0;i<len;i++)  aray[i]=arr1[i];
    }
    aray[top]=n;
    top=top+1;
    return top;
}
int pop(int top){
    aray[top-1]=0;
    top=top-1;
    if(top<=len/4)
    {
        for(int i=0;i<len/2;i++)
            delete &aray[len/2+i];
        len/=2;
    }
    return top;
}
main()
{
    system("color b");
    cout<<"0->push"<<endl<<"1->pop"<<endl;
    while(true){
        cin>>n;
        if(n==1 && top!=0){
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
        if(top!=0)cout<<aray[top-1];
        cout<<endl<<endl<<"length: "<<len<<endl<<"0->push"<<endl<<"1->pop"<<endl;
    }
  	getch();
}
