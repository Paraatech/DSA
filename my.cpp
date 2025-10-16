#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {-1, -3, 10, 2, 3};
    int n = 5;

    int max_ele = INT_MIN, second_max = INT_MIN;
    int min_ele = INT_MAX, second_min = INT_MAX;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] > max_ele) {
            second_max = max_ele;
            max_ele = arr[i];
        } else if (arr[i] > second_max && arr[i] != max_ele) {
            second_max = arr[i];
        }
    }


    for (int i = 0; i < n; i++) {
        if (arr[i] < min_ele) {
            second_min = min_ele;
            min_ele = arr[i];
        } else if (arr[i] < second_min && arr[i] != min_ele) {
            second_min = arr[i];
        }
    }

    cout << "The minimum element is : " << min_ele << endl;
    cout << "The 2nd minimum element is : " << second_min << endl;
    cout << "The maximum element is : " << max_ele << endl;
    cout << "The 2nd maximum element is : " << second_max << endl;

    return 0;
}
