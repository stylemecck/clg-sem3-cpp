// 7. Identify the error in the following program :
// #include <iostream.h>
//     int gValue = 10;
// void extra()
// {
//     cout << gValue << ‘ ‘;
// }
// void main()
// {
//     extra();
//     {
//         int gValue = 20;
//         cout << gvalue << ‘ ‘;
//         cout << : : gValue << ‘ ‘;
//     }
// }

#include<iostream>
using namespace std;
int gValue=10;
void extra(){
    cout<<gValue<<" ";
}
int main(){
    extra();
    {
        int gValue=20;
        cout<<gValue<<" ";
        cout<<::gValue<<" ";

    }
}