#include <iostream>
using namespace std;

main()
{
    system("color b");
    int n,a[100],imin=0,imax=1000000,max=0,min=1000000;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            imin=i;
        }
        if(a[i]>max)
        {
            max=a[i];
            imax=i;
        }
    }
    if(imax<imin)cout<<0;
    else         cout<<imax-imin-1;
}
