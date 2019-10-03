#include <iostream>
#include <conio.h>
#include <graphics.h>
using namespace std;
int a1[5],n=5,in1;
void enq(int in2)
{

}
void deq()
{

}
main()
{
    system("color b");
    cout<<"              //////           ///            ////"<<endl<<"            ////   ////      //  //         ///"<<endl<<"          //       ///           //      ////"<<endl<<"         //                      //    ////"<<endl<<"        //                      // ////"<<endl<<"        //                      //  ///"<<endl<<"        //                     //    ///"<<endl<<"        //                     //     ///"<<endl<<"         //        ///        //       ///"<<endl<<"          ////  ////         //         ///"<<endl<<"           ///////          //            /////";
    delay(300);
    system("CLS");
    char get;
    while(true)
    {
        system("cls");
        cout<<"the array: ";
        for(int i=0;i<n-1;i++)
            cout<<a1[i]<<" , ";
        cout<<a1[n-1]<<endl<<"a->enqueue"<<endl<<"s->dequeue"<<endl;
        cin>>get;
        if(get=='a')
        {
            cin>>in1;
            enq(in1);
        }
        else if(get=='s')
        {
            deq();
        }

    }
	getch();
}
