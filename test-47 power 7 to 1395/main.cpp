#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int jam(int l1,int l2,int*n1,int*n2)
{
    int k[12000],a=0,b=0,d=0,e=0,h=0,f=0,g=0,r=0,l;
    l=l2;
    if(l1<l2)
    {
        l=l2;
        while(d<l2-l1)
        {
            n1[l1+d]=0;
            d=d+1;
        }
    }
    if(l2<l1)
    {
        l=l1;
        while(d<l1-l2)
        {
            n2[l2+d]=0;
            d=d+1;
        }
    }
    while(e<l)
    {
        f=(n1[e]+n2[e]+h)/10;
        n2[e]=(n1[e]+n2[e]+h)%10;
        h=f;
        e=e+1;
    }
    if(h==1)
    {
        n2[l]=1;
        l=l+1;
    }
    return l;
}
main()
{
    string m1,m2;
    int n1[2000],n2[2000],a=0,l1,l2,d=0,c=0,b=0;
    m1='7';
    m2='7';
    l1=m1.size();
    l2=m2.size();
    while(a<l1){
        n1[a]=int(m1[l1-a-1])-48;
        a=a+1;
    }
    a=0;
    while(a<l2){
        n2[a]=int(m2[l2-a-1])-48;
        a=a+1;
    }
    a=0;
    while(a<1394){
        b=0;
        while(b<6){
            l2=jam(l1,l2,n1,n2);
            b=b+1;
        }
        c=0;
        while(c<l2){
            n1[c]=n2[c];
            c=c+1;
        }
        l1=l2;
        a=a+1;
    }
    a=0;
    while(a<l2){
        cout<<n2[a];
        a=a+1;
    }
	getch();
}
