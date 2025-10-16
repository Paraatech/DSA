#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {-1, -3, 10, 2, 3};
    int n = 5;

    int max_ele = arr[0];

    
    for (int i = 0; i < n; i++) {
        if (arr[i] > max_ele) {
           
            max_ele = arr[i];
        }
        
    }
    cout<<max_ele;
        return 0;
    }

