#include <iostream>
using namespace std;

int main(){
    float F;
    cout<<"enter the value thill where you need the tabel: ";
    cin>>F;
    float C;
    int n=0;

    while(n<F){
        C =(n-32)*5.0/9;
        n=n+1;
        cout<<n<<" F : ";
        cout<<C<<" C"<<endl;
    }

    

    
}