#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int arr1[4][4]={{200,0,2,1},{1000,5,7,2},{30,20,10,4},{100,4,1,3}},miin,muux=0,enable1='T',enable2='T';
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            enable1='T';
            enable2='T';
            for(int c=0;c<4;c++){
                if (arr1[i][c]>arr1[i][j] && c!=j)  enable1='F';
                //else enable1='T';
            }
            if(enable1=='T'){
                for(int c=0;c<4;c++){
                    if(arr1[c][j]<arr1[i][j] && c!=i) enable2='F';
                    //else enable2='T';
                }
            }
            if(enable1=='T' && enable2=='T') cout<<arr1[i][j]<<endl;
        }
    }
	getch();
}
