#include <bits/stdc++.h>
using namespace std;    
int main(){    
int arr[9] = {1,1,2,3,5,4,4,3,6};
int count=0;
for(int i=0;i<9;i++){
    for(int j=i+1;j<9;j++){
        if(arr[i]==arr[j]){
            count++;
            break;
        }
    }
}
cout<<count<<endl;
    return 0;
}
