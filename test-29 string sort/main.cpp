#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
main()
{
    char a[10][10]={"farhan","ali","mammad","mashhad","balood","sosis","soosk"},b[10];
    for(int i=0;i<9;i++){
        if(strcmp(a[i],a[i+1])<0){
            strcpy(b,a[i]);
            strcpy(a[i],a[i+1]);
            strcpy(a[i],b);
        }
    }
    for(int i=0;i<10;i++)   cout<<a[i]<<endl;
	getch();
}
