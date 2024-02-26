#include<iostream>
using namespace std;

void bubblesort(int arr[], int size){
    for(int i=0; i < size - 1; i++){
        for ( int j =0; j < size -i -1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[5];
    cout<<"Enter five numrical value:"<<endl;
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    bubblesort(arr, 5);
    
    cout<<"The shorted value:"<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}
