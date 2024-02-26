//drive redius from the area
#include<iostream>
#include<cmath>
using namespace std;
void radius(double area){
    double const pi=3.14;
    cout<<"The redius of the circle is: "<<sqrt(area/pi);
}
int main(){
    radius(50.24);
}