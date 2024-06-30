#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    cout<<i<<endl;
    return 0;
}
