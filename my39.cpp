//2D array frequency count
#include <iostream>
using namespace std;
int main(){
    int r=3;
    int c=4;
   
    int arr[r][c];
for (int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>arr[i][j];
    
    }
}
    for (int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<arr[i][j]<<" ";
        
    }

    cout<<endl;

    }
     int freq[100]={0};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            freq[arr[i][j]]++;
        }
    }
    int target;
    cin>>target;
    cout <<target <<" "<< freq[target];
}