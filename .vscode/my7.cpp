#include <bits/stdc++.h>
using namespace std;        
int main() {

    int arr[5] = {-1, -3, 10, 2, 3};
    int n = 5;

    int max_ele = arr[0];
int min_ele = arr[0];
int sum= min_ele+ max_ele;
    int second_max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max_ele) {
            max_ele = arr[i];
        }
    }
    
    cout << max_ele<<endl;

    
    cout << min_ele<<endl;
    cout<<" The sum of the minimum and maximum elements is: " << sum << endl;
    return 0;
}