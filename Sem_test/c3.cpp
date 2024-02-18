// Write a program to print the table of an input number using for loop.
#include <iostream>
using namespace std;
void table(int number){
    int res;
    for(int i=1; i<=10; i++){
        cout<<number *i<<" ";
    }
}

int main(){
  table(2);  
}