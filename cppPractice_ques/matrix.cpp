#include<iostream>
using namespace std;

int main(){
    int A[6],B[6],C[6][6][3];
    cout<<"Enter 4 numbers in A: ";
    for(int i=0;i<4;i++)
    cin>>A[i];
    cout<<"Enter 4 numbers in B: ";
    for(int i=0;i<4;i++)
    cin>>B[i];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++){
            C[i][j][0]=A[i]*B[j];
            C[i][j][1]=A[i]+B[j];
            C[i][j][2]=A[i]-B[j];
        }
    }
    for(int j=0;j<3;j++){
        for(int i=0;i<4;i++){
            cout<<" [ ";
            for(int k=0;k<4;k++)
            cout<<C[i][k][j]<<" ";
            cout<<"],";
        }
        cout<<"\n";
    }
    return 0;
}