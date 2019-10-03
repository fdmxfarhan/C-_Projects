#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
main()
{
    fstream output_file("test.txt",ios::out);
    fstream fp("test.txt",ios::in);
    char a[100]=";abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 .!@#$%^&*_-=?,",b[100]=";qwe rtyuiopasdfghjZXCVBNMAS.!@#$%^&*_-=?,DFGHJKLQWERTYUIOPklzxcvbnm3682501947",c,d,n=0;
    while(n==0){
        d=getch();
        for(int i=0;i<=100;i++){
            if(d==a[i]) c=b[i];
        }
        cout<<d;
        output_file<<c;
        if (d==13){
            output_file<<endl;
            cout<<endl;
        }
        if(d==';') n=1;
    }

	getch();
}
