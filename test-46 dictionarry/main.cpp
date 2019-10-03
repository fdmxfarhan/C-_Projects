#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
main()
{
    while(true){
    system("color 2");
    int n,l=0,w=0,size1,en1=0;
    char arr[1000];
    //cout<<getch();
    string word,mean;
    cout<<endl<<"================================"<<endl<<"      WELCOME...!!"<<endl<<"================================"<<endl<<endl<<" 0. add a word to the dictionarry."<<endl<<" 1. find a mean from the dictionarry."<<endl<<" 2. display the dictionarry."<<endl<<endl<<"type 2 , 1 or 0 then press inter: ";
    cin>>n;
    cout<<endl<<"type the word then press inter: ";
    if(n!=2)    cin>>word;
    cout<<endl;
    ////////add a word to dictionarry:
    ifstream a;
    ofstream b;
    size1=word.size();
    a.open("test0.txt",ios::in);
    while(!a.eof()){
        a>>arr[l];
        l++;
    }
    if(n==2){
        cout<<endl<<"all words:"<<endl<<endl<<" . ";
        for(int i=0;i<l-1;i++){
            if(arr[i]=='.') cout<<endl<<" . ";
            else            cout<<arr[i];
        }
    }
    else if(n==1){
        for(int i=0;i<l-1;i++){
            if(arr[i]==word[0]){
                for(int j=0;j<size1;j++){
                    if(word[j]!=arr[i+j])   en1=1;
                }
                if(en1!=1){
                    cout<<"search outputs:"<<endl<<" . ";
                    for(int j=0;arr[i+j]!='.';j++)    cout<<arr[i+j];
                }
            }
        }
    }
    else if(n==0){
        cout<<"type the mean and then press inter: ";
        cin>>mean;
        b.open("test0.txt",ios::out);
        for(int i=0;i<l-1;i++)    b<<arr[i];
        b<<word<<"="<<mean<<".";
        b.close();
    }
    cout<<endl<<endl<<"press any key....";
	getch();
	system("cls");
    }
}
