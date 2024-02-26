#include<iostream>
using namespace std;
namespace A {
    void display(){
        cout<<"Function display() from Namespace A"<<endl;
    }
}

namespace B {
    void display(){
        cout<<"Function display() from namespace B"<<endl;
    }
}
int main(){
    A::display();//calling display from namespace A
    B::display();//calling display from namespace B
    //if you try to call without specifying the namespace, you will get compilation error
    //display(); //this will cause error due to namespace conflict.
}