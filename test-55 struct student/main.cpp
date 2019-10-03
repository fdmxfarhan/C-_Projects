#include <iostream>
#include <conio.h>
using namespace std;
struct student
{
    string name;
    int class_number;
    int math_grade;
    int physics_grade;
    int computer_grade;
    int mid;
    void calc_mid()
    {
        mid=(math_grade+physics_grade+computer_grade)/3;
    }
};
main()
{
    system("color 2");
    cout<<"========================================"<<endl<<"          WELCOME"<<endl<<"========================================"<<endl;
    cout<<endl<<"type the students number...?? ";
    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++){
        a[i].class_number=i+1;
        cout<<endl<<"type student number "<<i+1<<" name: ";
        cin>>a[i].name;
        cout<<endl<<"type student number "<<i+1<<" math grade: ";
        cin>>a[i].math_grade;
        cout<<endl<<"type student number "<<i+1<<" physics grade: ";
        cin>>a[i].physics_grade;
        cout<<endl<<"type student number "<<i+1<<" computer grade: ";
        cin>>a[i].computer_grade;
        a[i].calc_mid();
        cout<<endl<<a[i].mid;
    }
	getch();
}
