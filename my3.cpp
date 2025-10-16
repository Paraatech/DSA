#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[4] = {3,5,4,3};
     int duplicate[4];
    
     int i=3;
    for(int j = 0; j<4; j++){
        duplicate[j] = arr[i];
        i--;
        }
        for(int i=0; i<4; i++){
            if(arr[i]!=duplicate[i]){
            cout<<"no"<<endl;
          break;
        
            }
            
            
            
        }    
        cout<<"hi";
    return 0;
}