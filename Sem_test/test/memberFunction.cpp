#include<iostream>
using namespace std;
//indide the class defination
class class_name{
    public:
    void function_name(){
        cout<<"Inside member function is called:"<<endl;
    }
};

//outside member function using scope vriable:
class class_otside{
    public:
    void outside_function();
};
void class_otside::outside_function(){
    cout<<"outside member function is called:";
}
int main(){
    class_name().function_name();
    class_otside().outside_function();
}
