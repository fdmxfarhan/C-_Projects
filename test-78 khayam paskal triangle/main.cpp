#include <iostream>
using namespace std;
main()
{
    system("color b");
    int n,arr1[100][100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        arr1[i][0]=1;
        arr1[i][i]=1;
        for(int j=1;j<i;j++)
        {
            arr1[i][j]=arr1[i-1][j]+arr1[i-1][j-1];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<arr1[i][j]<<" ";
        cout<<endl;
    }
}
