//call by value example
#include <iostream>
using namespace std;

void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside function (call by value): a = " << a << ", b = " << b << endl;
}

int main() {
    int x = 10, y = 20;
    swapValue(x, y);
    cout << "Outside function: x = " << x << ", y = " << y << endl;
    return 0;
}
// In this example, the values of x and y remain unchanged outside the function