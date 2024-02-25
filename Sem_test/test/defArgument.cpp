#include<iostream>
using namespace std;
void defaultArgument(int number=2, int i=1){
   int result;
    for(i;i<=10; i++){
        result= number *i;
        cout<<result<<" ";
    }
}
int main(){
    defaultArgument();
}