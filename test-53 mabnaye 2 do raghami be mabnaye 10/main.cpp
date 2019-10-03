#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;
int m(string s)
{
    return s[0]-48+(s[1]-48)*2+(s[2]-48)*4;
}
main()
{
    while(true){
    string s;
    cin>>s;
    cout<<m(s)<<endl;

    }
}
