#include<iostream>
using namespace std;

void addMatrix(int matrix1[][3], int matrix2[][3], int result[][3]){
    for( int i=0; i<3; ++i){
        for( int j=0; j<3; ++j){
            result[i][j]= matrix1[i][j] + matrix2[i][j];
        }
    }
}

void inputMatrix(int matrix[][3]){
    cout<<"Enter the matrix element: "<<endl;
    for(int i=0; i<3; ++i){
        for ( int j=0; j<3; ++j){
            cin>>matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[][3]){
    for (int i=0; i<3; ++i){
        for (int j=0; j<3; ++j){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int matrix1[3][3], matrix2[3][3], result[3][3];
    cout<<"First Matrix:"<<endl;
    inputMatrix(matrix1);

    cout<<"Second Matrix: "<<endl;
    inputMatrix(matrix2);

    cout<<"First matrix is:"<<endl;
    displayMatrix(matrix1);

    cout<<"Second matrix is:"<<endl;
    displayMatrix(matrix2);
    
    addMatrix(matrix1,matrix2,result);

    cout<<"Adition of the matrix is: "<<endl;
    displayMatrix(result);
}