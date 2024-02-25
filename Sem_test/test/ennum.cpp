#include<iostream>
using namespace std;
enum week{
    sunday, monday, tuesday, wed, fri, sat
};
int main(){
    week today;
    today = monday;
    cout<<"Day "<<today+1; 
}