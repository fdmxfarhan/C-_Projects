#include <iostream>
#include <conio.h>
using namespace std;
struct node
{
    int x;
    node *next;
    node *back;
};

main()
{
    system("color b");
    cout<<"========================================"<<endl<<"          WELCOME"<<endl<<"========================================"<<endl;
    system("pause");
    system("cls");
    cout<<"type your numbers and then type 0:"<<endl<<endl;
    node *head;
    int m;
    cout<<"  ";
    cin>>m;
    head=new node;
    head->x=m;
    head->next=NULL;
    head->back=NULL;
    node *p;
    p=new node;
    while (m!=0)
    {
        cout<<"  ";
        p=head;
        cin>>m;
        //p->next->x=m;
        if(m==0)    break;
        while(p->next!=NULL && m>p->next->x)
            p=p->next;
        node *q;
        q=new node;
        q->x=m;
        q->next=p->next;
        p->next=q;
        q->back=p;kk
        p=head;
    }
    cout<<"sorted numbers"<<endl<<endl;
    int g,l=0;

    while(true)
    {
        g=getch();
        if(g=='d')l++;
        for(int i=0;p->next!=NULL;i++)
        {
            if(l!=i)
                cout<<"  "<<p->x<<endl;
            else
                cout<<"  "<<p->x<<"<-"<<endl;
            p=p->next;
        }
    }
    cout<<"  "<<p->x<<endl<<endl;
    delete p,head;
    system("pause");
    system("cls");
    getch();
}
