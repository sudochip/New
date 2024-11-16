#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    int n=2;
    int sum=0;

    while (n<=a){
        sum=n+sum;
    
        n=n+2;    
    }
    cout<<sum<<endl;
}