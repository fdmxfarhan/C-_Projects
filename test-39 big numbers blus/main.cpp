#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    char a[200]="123456790123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890",b[200]="3457890151234567674567890123456267890123458901890123778989012345656789023456789010123456234",c[100],d;
    //cin>>a;
    //cin>>b;
    for(int i=100;i<1;i++){
        if(a[i]-'0'+b[i]-'0'>9)
            d=((a[i]-'0'+b[i]-'0')/10)%10+'0';
        else d='0';
        c[i]=(a[i]-'0'+b[i]-'0')%10+d;
    }
    for(int i=0;i<100;i++)  cout<<c;
	getch();
}
