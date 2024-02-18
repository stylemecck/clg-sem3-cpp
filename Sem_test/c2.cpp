// Write a program to calculate the circumference of a circle using const keyword.
#include<iostream>
using namespace std;
#define pi 3.14 
void cirCumference(double redius){
    double res = 2 * pi * redius;
    cout<<"The circumference of circle of the redius "<<redius<< " is "<<res;
}
int main(){
    cirCumference(10);
}