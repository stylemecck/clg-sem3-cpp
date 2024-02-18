// 17. Find out the error in the following program:
// #include <iostream.h>
// void main()
// {
// int num[]={1,2,3,4,5,6};
// num[1]==[1]num ? cout<<”Success” : cout<<”Error”;

#include<iostream>
using namespace std;
int main(){
    int num[]={1,2,3,4,5,6};
    num[1]==num[1] ? cout<<"sucess" :cout<<"error";
}