//reccursion example
#include <iostream>
using namespace std;
void printarray(int arr[],int idx, int n){
    //base case
    if(idx==n)
        return;
    
    cout<<arr[idx]<<" ";
    printarray(arr, idx+1,n);
    
}
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    printarray(arr,0,n);
    
}