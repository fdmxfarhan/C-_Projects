#include <iostream>
#include <conio.h>
//#include <bits/stdc++.h>
using namespace std;
struct tree
{
    int x;
    tree *left;
    tree *right;
};
void insert(tree *p,int a)
{
    if(a >= p->x)
    {
        while(p->right!=NULL) p=p->right;
        p->right->x=a;
        cout<<"f";
    }
    else
    {
        while(p->left!=NULL)  p=p->left;
        p->left->x=a;
        cout<<"f";
    }
}
main()
{
    system("color b");
    tree *root , *p , *q;
    root=new tree;
    p=new tree;
    int a;
    cin>>a;
    root->x=a;
    root->right=NULL;
    root->left=NULL;
    p=root;
    while (a!=0)
    {
        cin>>a;
        if(a==0)    break;
        insert(p,a);
        p=root;
    }
    p=root;
    cout<<" "<<p->x<<endl;
    cout<<p->left->x<<" "<<p->right->x<<endl;
    /*q=new tree;
    while(p->right!=NULL || p->left!=NULL)
    {
        cout<<p->x;
        if(p->right!=NULL)
        {

        }
    }*/
	//getch();
}
