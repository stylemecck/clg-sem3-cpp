// 8. Identify the error in the following program :
// #include <iostream.h>
//     struct Room
// {
//     int width;
//     int length;
//     void setValue(int w, int l);
//     {
//         width = w;
//         length = l;
//     }
// };
// void main()
// {
//     Room objRoom;
//     objRoom.setValue(12, 1, 4);
// }
#include<iostream>
using namespace std;
struct room{
    int width;
   int length;

   void setValue(int l, int w){
    width= w;
    length = l;
    
   }
};

int main(){
    room objRoom;
    objRoom.setValue(12,4);
}