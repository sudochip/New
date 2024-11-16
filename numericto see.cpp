#include <iostream>
using namespace std;


int main(){
char ch;

    cout<<"enter the character to be characterized:";
    cin>> ch;
    if(ch>='A'&&ch<='Z' ){
        cout<<"the upper case value is"<< ch<<endl;
    }
    else if(ch>='a'&& ch<='z'){
        cout<<"lower case";

    }
    else if (ch>= '0'&& ch<='9'){
        cout<<"numerical value";

    }
    else{
        cout<<"try again";
    }
    }