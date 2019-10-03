#include <iostream>
#include <conio.h>
using namespace std;
void Marge(int a[],int low, int high, int mid)
{
    int j=low,t;
    for(int i=mid+1;i<=high;i++)
    {
        while(a[j] < a[i])   j++;
        t=a[i];
        if(j==i) break;
        for(int k=i;k>j;k--)
            a[k]=a[k-1];
        a[j]=t;
    }
}
void Marge_sort(int a[],int low ,int high)
{
    if(low >= high) return;
    int mid = (low + high) / 2;
    Marge_sort( a, low, mid);
    Marge_sort( a, mid + 1, high);
    Marge(a, low, high, mid);
}
main()
{
    system("color a");
    cout << "Hello world!" << endl;
    int arr1[]={2,4,3,5,5,6};
    Marge_sort(arr1,0,5);
    for(int i=0;i<6;i++)
    {
        cout << arr1[i];
        if(i<5) cout<<",";
    }
	getch();
}
