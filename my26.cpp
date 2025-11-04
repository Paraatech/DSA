#include<iostream>
using namespace std;
int main(){
  int arr[8]= {10, 12, 15, 0, 2, 3, 4, 5};
  int target = 12;
  int l = 0;
  int r = 7;
  while(l<=r){
    int m = (l+r)/2;
    if(arr[m]==target){
      cout << m;
      break;
    }
    if(arr[m]<=arr[r]){
      if(target>=arr[m] && target<=arr[r]){
        l = m+1;
      }
      else{
        r = m-1;
      }
    }
    else{
      if(target>=arr[l] && target<=arr[m]){
        r = m-1;
      }
      else{
        l = m+1;
      }
    }
  }
  
}