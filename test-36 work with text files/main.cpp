#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
main()
{
    ////////////////////////////////////////////////////write text file:
    fstream output_file("test.txt",ios::out);
    if (!output_file){
        cout<<"eror"<<endl;
        exit(1);
    }
    else{
        char a;
        output_file<<"1234"<<endl;
    }
    /////////////////////////////////////////////////////read text file:
    fstream fp("test.txt",ios::in);
    if (!fp){
        cout<<"eror"<<endl;
        exit(1);
    }
    else{
        int num;
        fp>>num;
        cout<<num;
    }
	getch();
}
