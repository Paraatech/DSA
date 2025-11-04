//first occurense of 2 binary search and last and count
#include <iostream>
using namespace std;
int main(){
    int arr[9] = {1,2,2,2,3,3,4,5,6};
    int n =9;
    int target = 2;
    int l = 0, r = n - 1;
    int ans = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == target) {
            ans = m;      
            r=m-1;
        } else if (arr[m] > target) {
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }
    
        cout << "first occ is at " << ans << '\n';
    int l2 = 0, r2 = n - 1;
    int last = -1;
    while (l2 <= r2) {
        int m = l2 + (r2 - l2) / 2;
        if (arr[m] == target) {
            last = m;
            l2 = m + 1;
        } else if (arr[m] > target) {
            r2 = m - 1;
        } else {
            l2 = m + 1;
        }
    }
    cout << "last occ is at " << last << " ";
   
        cout << "count is " << (last - ans + 1) << " ";
    
    return 0;
    }