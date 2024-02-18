// 4. Write a program to enter marks and print “First Division’ if marks>=60 otherwise print
// “Second Division”

#include<iostream>
using namespace std;
void marks(int number){
    if (number>=60){
        cout<<"First Division"<<endl;
    }
    else{
        cout<<"Second Division"<<endl;
    }
}
int main(){
    int number;
    cout<<"Enter the marks"<<endl;
    cin>>number;
    marks(number);

}