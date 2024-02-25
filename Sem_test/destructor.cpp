#include<iostream>
using namespace std;
class satyam{
    public:
    int age;
    ~satyam(){
        cout<<"Destructor is called:";
    }
};
int main(){
    satyam();
}