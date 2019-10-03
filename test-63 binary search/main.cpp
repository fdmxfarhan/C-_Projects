#include <iostream>
#include <conio.h>

using namespace std;

int Bsearch(int x, int arr[], int low, int high)
{
    if(high>=low)
    {
        int mid = (high+low)/2;

        if(x==arr[mid])
        {
            return mid;
        }
        else if(x<arr[mid])
            return Bsearch(x,arr,low,mid-1);
        else //if(x>arr[mid])
            return Bsearch(x,arr,mid+1,high);
    }
    return -(low+1);
}

main()
{
    system("color a");
    int x;
    int Array[]= {1,2,3,4,5,6};
    int bs;
    cout<<"the array is: ";
    for(int i=0;i<6;i++)
    {
        cout<<Array[i];
        if(i<5)cout<<",";
    }
    cout<<endl;
    while(true)
    {
        cout<<"Find What?";
        cin >> x;
        bs=Bsearch(x, Array, 0, 5);
        if (bs>=0) cout<<endl<<bs+1<<endl;
        else    cout<<endl<<"does not exist...!!!"<<endl;
    }
	getch();
}
