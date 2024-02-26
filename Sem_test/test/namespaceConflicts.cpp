#include<iostream>

namespace A {
    void display(){
        std::cout<<"Function display() from Namespace A"<<std::endl;
    }
}

namespace B {
    void display(){
        std::cout<<"Function display() from namespace B"<<std::endl;
    }
}
int main(){
    A::display();//calling display from namespace A
    B::display();//calling display from namespace B
    //if you try to call without specifying the namespace, you will get compilation error
    //display(); //this will cause error due to namespace conflict.
}