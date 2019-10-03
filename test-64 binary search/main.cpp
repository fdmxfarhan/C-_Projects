#include <iostream>
#include <conio.h>
using namespace std;
int bsearch(int x, int arr[], int low, int high)
{
    if(high>=low){
    int mid = (high+low)/2;
    if(x==arr[mid])     return mid;
    else if(x<arr[mid]) bsearch(x,arr,low,mid-1);
    else                bsearch(x,arr,mid+1,high);
    }
    return -1;
}
main()
{
    system("color a");
    int x;
    int Array[]= {1,3,5,10,12,24};
    int bs;
    while(true)
    {
        system("color a");
        system("cls");
        cout<<"the array is: ";
        for(int i=0;i<6;i++)
        {
            cout<<Array[i];
            if(i<5)cout<<",";
        }
        cout<<endl<<endl;
        cout<<"search: ";
        cin >> x;
        bs=bsearch(x, Array, 0, 5);
        if (bs>0) cout<<endl<<"the number is: "<<bs+1<<endl;
        else
        {
            cout<<endl<<"does not exist...!!!"<<endl;
            system("color c");
        }
        cout<<endl;
        getch();
    }
	getch();
}
