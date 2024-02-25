#include<iostream>
using namespace std;
void table(double number){
    double result;
    for(int i=1; i<=10; i++){
         result = number *i;
         cout<<result<<endl;
    }   
}
int main(){
    double number;
    cout<<"Enter the no:"<<endl;
    cin>>number;
    table(number); 
}