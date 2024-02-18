// 18. Find out the error in the following program:
// #include <iostream.h>
// void main()
// {
// int i=0;
// i=400*400/400;
// cout<< i;
// }

#include<iostream>
using namespace std;
int main(){
    int i=0;
    i=400 *(400/400);
    cout<<i;
}