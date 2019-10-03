#include <iostream>
#include <conio.h>
using namespace std;

void pop(int *array1[])
{
    int i=0;
    while (array1[i+1] != NULL) i++;
    array1[i]=NULL;
}
void push(int *array1[],int var)
{
    int i=1;
    while (array1[i-1] != NULL) i++;
    array1[i]=new int;
    *array1[i]=var;
    array1[i+1]=NULL;
}
main()
{
    system("color b");
    int *array1[2],var1;
    char get;
    array1[0]=NULL;
    array1[1]=NULL;
    while(true)
    {
        cout<<"0->push"<<endl<<"1->pop"<<endl;
        cin>>get;
        if(get == '0')
        {
            cin>>var1;
            push(array1,var1);
        }
        else if(get == '1')
            pop(array1);
        system("cls");
        for(int i=0;array1[i] != NULL;i++)
            cout<<*array1[i]<<" , ";
    }
	getch();
}
