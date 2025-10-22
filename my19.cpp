//insertion sort
#include <iostream>
using namespace std;    
int main(){
    int n=5;
    int arr[n]={4,3,5,1,2};

    for(int i=1;i<n;i++){
        
        for(int j=1;j>0;j--){
          if  (arr[j]<arr[j-1]){
             swap(arr[j],arr[j-1]);
             break;
        }
    
    }

   
                
}
 cout<<"sorted array is: "; 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}