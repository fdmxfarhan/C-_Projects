#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    char arr1[8][8];
    int xvazir,yvazir,harif[2][4]={{1,3,3,1},{2,2,4,5}};
    for(int i=0;i<8;i++){
        for (int j=0;j<8;j++)   arr1[i][j]='-';
    }
    for(int i=0;i<4;i++)    arr1[harif[1][i]][harif[0][i]]='2';
    cout<<"X vazir..??";
    cin>>xvazir;
    cout<<"Y vazir..??";
    cin>>yvazir;
    arr1[yvazir][xvazir]='*';

    for(int i=0;i<8;i++){
        for (int j=0;j<8;j++)   cout<<arr1[i][j]<<" ";
        cout<<endl;
    }
	getch();
}
