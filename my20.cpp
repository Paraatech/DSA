// function overloading example
#include <iostream>
using namespace std;   


   
int mult(int a, int b){
    return a * b;    


}

int mult(int a, int b, int c){
    return a * b * c;
}
int main(){
    int value1 = mult(2, 3);
    int value2 = mult(2, 3, 4);
    cout<<value2<<endl;
    cout<<value1<<endl;
    return 0;
}
