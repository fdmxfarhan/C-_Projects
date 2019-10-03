#include <iostream>
#include <conio.h>
using namespace std;
int pars(int arr[],int n,int s){
    if(2*n+1<=s)   pars(arr,2*n+1,s);
    cout<<arr[n]<<endl;
    if(2*n+2<=s) pars(arr,2*n+2,s);
}
void inzert(int a[],int n,int x){
    if (a[n]==-1){
        a[n]=x;
        return ;
    }
    if(x>a[n]){
        inzert(a,2*n+1,x);
        return ;
    }
    inzert(a,2*n+1,x);
}
main(){
    int a[]={20,17,24,14,19,21,27,10,15,18,20,20,23,24,29},b,c[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    cout<<pars(a,1,15)<<endl<<"_______________________________________________________________"<<endl;
    for(int i=0;i<15;i++){
        cin>>b;
        inzert(c,0, b);
    }
    cout<<pars(c,0,15)<<endl<<"_______________________________________________________________"<<endl;
	getch();
}
