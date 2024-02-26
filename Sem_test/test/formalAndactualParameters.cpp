#include<iostream>
using namespace std;
//formal parameters (int a, and int b)
int Sum(int a, int b){
    return a+b;
}
int main(){
   int result= Sum(10,20);
   //here (10,20) is a formal parameters
   cout<<result<<endl;
}