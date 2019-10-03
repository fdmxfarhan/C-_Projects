#include <iostream>
#include <graphics.h>
#include <math.h>

using namespace std;
main()
{
    int x[200],y[200],n,len[200],a;
    cout << "chandzelee mikhay??"<<endl;
    cin >> n;
    for(int i=0;i<n;i++){
        cout<<endl<<"X ro bede:";
        cin>>x[i];
        cout<<endl<<"Y ro bede:";
        cin>>y[i];
    }
    cout<<"ye daghighe sabr kon...!!!";
    delay(2000);
    initwindow(800,600);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            len[j]=sqrt(pow(x[j]-x[j],2)+pow(y[j]-y[j],2));
        }
        a=i;
        for(int t=0;t<n;t++){
            if (len[a]>=len[t])  a=t;
        }

        line(x[i],y[i],x[a],y[a]);
    }
    line(x[0],y[0],x[a],y[a]);
	getch();
}
