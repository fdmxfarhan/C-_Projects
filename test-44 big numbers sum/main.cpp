#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout << "Hello world!" << endl;
    string m1,m2;
    int n1[1000],n2[1000],a=0,b,c,d=0,e,arr[1000],f=0;
    cin>>m1;
    cin>>m2;
    b=m1.size();
    c=m2.size();
    for(a=0;a<b;a++)        n1[a]=int(m1[b-a-1])-48;
    for(a=0;a<c;a++)        n2[a]=int(m2[c-a-1])-48;
    a=0;
    if(b<c){
        for(;a<b;a++){
            arr[f]=(n1[a]+n2[a]+d)%10;
            f++;
            d=(n1[a]+n2[a]+d)/10;
        }
        for(;a<c;a++){
            arr[f]=(n2[a]+d)%10;
            f++;
            d=(n2[a]+d)/10;
        }
        if(d==1){
            arr[f]=1;
            f++;
        }
    }
    if(c<b){
        for(;a<c;a++){
            arr[f]=(n1[a]+n2[a]+d)%10;
            f++;
            d=(n1[a]+n2[a]+d)/10;
        }
        for(;a<b;a++){
            arr[f]=(n1[a]+d)%10;
            f++;
            d=(n1[a]+d)/10;
        }
        if(d==1){
            arr[f]=1;
            f++;
        }
    }
    if(c==b){
        for(;a<b;a++){
            arr[f]=(n1[a]+n2[a]+d)%10;
            f++;
            d=(n1[a]+n2[a]+d)/10;
        }
        if(d==1){
            arr[f]=1;
            f++;
        }
    }
    for(int i=f-1;i>=0;i--) cout<<arr[i];
}
