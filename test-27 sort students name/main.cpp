#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int stringcomape(char a[10],char b[10]){
    if(a>b)        return 1;
    else if (a<b)  return -1;
    else if (a==b) return 0;
}
char strcpy(char a[10][10],char b[10][10]){
    for(int i=0;i<10;i++){`
        for(int j=0;j<10;j++)   a[i][j]=b[i][j];
    }
}
char sortname[10][10];
char soort(char name[10][10]){
    char a;
    for(int i=0;i<10;i++){
        for(int j=0;j<i-1;j++){
            if(stringcomape(name[i],name[j])>0)
                swap(name[i],name[j]);
        }
    }
    strcpy(sortname,name);
}
int bsearch(char names[10][10],char name[20]){
    for(int i=0;i<10;i++){
        if(!strcmp(names[i],name))  return i;
    }
    return -1;
}
main()
{
    char names[10][10]={{"goshtasbi"},{"saberi"},{"balood"},{"hatami"},{"javadi"},{"daemi"},{"mashhadi"},{"mammad"},{"mehti"}};
    soort(names);
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)  cout<<sortname[i][j];
        cout<<endl;
    }
    cout<<endl<<bsearch(names,"mashhadi");
    getch();
}
