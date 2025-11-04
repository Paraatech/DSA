#include <iostream>
using namespace std;
 int main(){

    int n=3;
    int arr[n][n+1];

    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n;j++){
            
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
 }
