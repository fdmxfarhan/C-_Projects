#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
main()
{
    fstream output_file("unlucked.txt",ios::out);
    fstream fp("test.txt",ios::in);
    char a[100]=";abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 .!@#$%^&*_-=?,",b[100]=";qwe rtyuiopasdfghjZXCVBNMAS.!@#$%^&*_-=?,DFGHJKLQWERTYUIOPklzxcvbnm3682501947",c,d;
    while(100){
        fp>>d;
        cout<<d;
    }
	getch();
}
