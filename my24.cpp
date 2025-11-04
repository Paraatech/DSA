//rotate array k times
#include <iostream> 
using namespace std;
int main(){
    int n=7;
int k = 3;
    int arr[n]={1,2,3,4,5,6,7};
    int arr2[n];
    
k =k%n;
for (int i = 0; i < n; i++){
 arr2[(i +k) % n] = arr[i];

}
for (int i = 0; i < n; i++){ 
    cout << arr2[i] << " "; 
}

    

}