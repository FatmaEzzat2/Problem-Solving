#include <iostream>
#include <string>
using namespace std;

int main() {

    string s1,s2;
    cout<<"Enter the string1"<<endl;
    cin>>s1;
    cout<<"Enter the string2"<<endl;
    cin>>s2;
    s1=s1.append(s2);
    cout<<s1<<endl;
    return 0;

}
