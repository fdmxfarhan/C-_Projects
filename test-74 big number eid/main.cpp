#include <iostream>
using namespace std;
string a;
int s;
string bignum()
{
    for(int i=s-1;i>=0;i--)
    {
        if(a[i]-'0'<a[s]-'0')
        {
            swap(a[i],a[s]);
            return a;
        }
    }
    return "0";
}
main()
{
    system("color b");
    cin>>a;
    s=a.size()-1;
    cout<<bignum();
}
