//find cercum frances of circle using const key
#include<iostream>
using namespace std;
void circleCurcum(double redius){
    const double pi =3.14;
    double result = 2* pi*redius;
    cout<<"The circumfrence of the circle is :"<<result<<endl;
}
int main(){
    circleCurcum(10);
}