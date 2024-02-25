#include<iostream>
using namespace std;
int main(){
    int size, arr1[10][10],arr2[10][10];
    cout<<"Enter the first matrix: "<<endl;
    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the second matrix: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr2[i][j];
        }
    }

    cout<<" the first matrix is: "<<endl;
    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the second matrix: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    //addition of matrix
    cout<<"Addition of the matrix is: "<<endl;
    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<<arr1[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }


}