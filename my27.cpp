#include <iostream>
using namespace std;
int main(){
int a=5;
int &b=a; // reference variable
 b= b+10;
 a=1;
 b=2;

    cout << "Value of a: " << a << endl; // 
    cout << "Value of b: " << b << endl; 
    return 0;
}