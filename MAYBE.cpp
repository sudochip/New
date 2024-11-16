#include <iostream>
using namespace std;

int main(){
    int n,row=1,coloum=0;
    cin>>n;
    while (row<=n)
    {
        int j=1;
        while (j<=n)
        {
            char c ='A'+coloum;
            cout<<c;
            j=j+1;
            coloum=coloum+1;
        }
        cout<<endl;
        row=row+1;

        
    }
}
