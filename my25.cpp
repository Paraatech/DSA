//insertion array example
#include <iostream>
 using namespace std;
 int main(){
    int n= 5;
    int arr[n]={3,1,2,4,5};
    int pos = 2;
    int num=21;

    for(int i = n; i>=pos;i-- ){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=num;
    n++;
    cout<<"arr  is ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
 }