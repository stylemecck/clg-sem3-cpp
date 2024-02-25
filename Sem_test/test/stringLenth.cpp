#include<iostream>
#include<string>
using namespace std;
void lenghtOfStr(string str){
    // int length=str.length();
    cout<<"String Length: "<<str.length()<<endl;
    cout<<"String Size: "<<str.size();
}
int main(){
    string str;
    getline(cin, str);
    lenghtOfStr(str);
    
}