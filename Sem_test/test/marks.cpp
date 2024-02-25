// Write a program to enter marks and print “First Division’ if marks>=60 otherwise print
// “Second Division”.
#include<iostream>
using namespace std;
void division(int number){
    if(number>=60){
        cout<<"First division";
    }
    else {
        cout<<"second division";
    }
}
int main(){
    division(40);
}