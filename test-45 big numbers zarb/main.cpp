#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
main()
{
    string b1,b2;
    int a1[100],a2[100],h[100][100],c[100],size1,size2,d=0;
    for (int i=0;i<100;i++)          c[i]=0;
    cin>>b1;
    cin>>b2;
    size1=b1.size();
    size2=b2.size();
    if(size1>=size2){
        for (int i=0;i<size1;i++)   a1[i]=b1[i]-'0';
        for (int i=0;i<size2;i++)   a2[i]=b2[i]-'0';
    }
    else{
        for (int i=0;i<size1;i++)   a2[i]=b1[i]-'0';
        for (int i=0;i<size2;i++)   a1[i]=b2[i]-'0';
        size1,size2=size2,size1;
    }
    for(int i=size2-1;i>=0;i--){
        for (int j=size1-1;j>=0;j--)    h[j][i]=a1[j]*a2[i];
    }
    /*for(int i=0;i<size2;i++){
        for(int j=0;j<size1;j++){
            if(h[j][i]>9){
                h[j][i]=h[j][i]%10;
                h[j+1][i]+=h[j][i]-(h[j][i]%10);
            }
        }
    }*/

    for(int i=0;i<size2;i++){
        for(int j=0;j<size1;j++){

        }
    }

    /*
    for(int i=0;i<size2;i++){
        for(int j=0;j<size1;j++)    cout<<h[j][i];
        cout<<endl;
    }

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
    /*for(int i=0;i<size2;i++){
        for(int j=0;j<size1;j++)    h[j][i]=a1[j]*a2[i];
    }
    for(int j=0;j<size1;j++){
        for(int i=0;i<size2;i++)    c[i]=h[j][i];
    }
    for(int i=0;i<size1;i++)          cout<<c[i];*/

    getch();
}
