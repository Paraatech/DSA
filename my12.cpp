#include <iostream>
using namespace std;
int main(){
   
    int arr[8]={1,4,6,8,10,14,17,20};
    int target=6;
    int l=0,r=7;
     bool check=false;
    while(l<=r){
        int m= (l+r)/2;
         if (arr[m]==target){
        cout<<"element found at index: "<<m;
        check=true;
        break;
         }
         else if(arr[m]<target){
            l=m+1;

         }
         else{
            r=m-1;
         }
         
         
    
    }
    if(check==false){
        cout<<"not found";
    }
}