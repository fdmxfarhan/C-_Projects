#include <iostream>
#include <conio.h>
using namespace std;
int a1[200]={1,2,3,4,5,6},n=6;
void insrt(int var1,int place1)
{
    for(int i=0;i<n;i++)
    {
        if(i==place1-1)
        {
            for(int j=n-1;j>i;j--)    a1[j]=a1[j-1];
            a1[i]=var1;
        }
    }
}
void insort(int a1[],int place3,int var3,int k)
{
    for(int i=k-1;i>=place3+1;i--)
        a1[i]=a1[i-1];
    a1[place3]=var3;
}
int m=1000;
void findmin()
{
    for(int i=0;i<n;i++)
    {
        if(a1[i]<m) m=a1[i];
    }
}
main()
{
    system("color a");
    cout << "WELCOM........!!!" << endl;
    int var2,place2;
    cout<<
    /*************
    cout<<endl<<"your varriable: ";
    cin>>var2;
    cout<<endl<<"your varriable place: ";
    cin>>place2;
    *************/
    //findmin();
    for (int i=0;i<n;i++)   insort(a1,i,m,n);
    cout<<endl<<"sorted array: ";
    for(int i=0;i<n;i++)    cout<<","<<a1[i];
	getch();
}
