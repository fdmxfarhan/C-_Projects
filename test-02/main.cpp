#include <iostream>
using namespace std;
int fib(int n){
    if(n==1)      return 1;
    else if(n==2) return 1;
    else          return fib(n-1)+fib(n-2);
}
int main(){
    int a;
    while(1){
    cin >>a;
    cout << fib(a) << "\n";
    }
}
