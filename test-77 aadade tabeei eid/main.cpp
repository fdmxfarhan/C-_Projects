#include <iostream>
using namespace std;
main()
{
    system("color b");
    int n,a[100],b[100],c[100],d[100],var1=0,t=0,l=0,var2=0,var3=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
        for(int j=0;j<b[i]-a[i]+1;j++)
        {
            c[t]=a[i]+j;
            t++;
        }
    }
    for(int i=0;i<t;i++)
    {
        var2=0;
        for(int j=0;j<l;j++)
        {
            if(c[i]==d[j])
                var2=1;
        }
        if(var2==1)var3++;
        else
        {
            d[l]=c[i];
            l++;
        }
    }
    cout<<t-var3;
}
