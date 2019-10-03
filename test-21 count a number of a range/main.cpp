#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    srand(time(NULL));
    int a[100],b[100],c;
    for(int i=0;i<100;i++)    a[i]=rand()%100;
    for(int i=0;i<100;i++){
        c=0;
        for(int j=0;j<100;j++){
            if (a[j]==a[i]) c+=1;
        }
        b[i]=c;
    }
    for(int i=0;i<100;i++)cout<<a[i]<<"\t"<<b[i]<<endl;
	getch();
}
