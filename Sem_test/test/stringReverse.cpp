#include<iostream>
#include<string>
using namespace std;
void reverseString(string str){
    int length= str.length();
    for(int i=length-1; i>=0; i--){
        cout<<str[i];
    }
}
int main(){
    string str;
    cout<<"Enter the string:"<<endl;
    getline(cin, str);
    cout <<"Reverse string is: ";
    reverseString(str);
}
