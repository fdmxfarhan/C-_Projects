#include <iostream>
using namespace std;
main()
{
    system("color b");
    string str;
    cin>>str;
    int n=str.size();
    char chr[n];
    for(int i=0;str[i]!='+' && str[i]!='-' && i<n;i++)
    {
        if(str[i]>='0' && str[i]<='9')cout<<str[i];
    }
    for(int i=0;str[i]!='+' && str[i]!='-' && i<n;i++)
    {
        if(!(str[i]>='0' && str[i]<='9'))cout<<str[i];
    }
    for(int i=1;i<n;i++)
    {
        if(str[i-1]=='+' || str[i-1]=='-')
        {
            cout<<str[i-1];
            for(int j=i;str[j]!='+' && str[j]!='-' && j<n;j++)
            {
                if(str[j]>='0' && str[j]<='9')cout<<str[j];
            }
            for(int j=i;str[j]!='+' && str[j]!='-' && j<n;j++)
            {
                if(!(str[j]>='0' && str[j]<='9'))cout<<str[j];
            }
        }
    }
}
