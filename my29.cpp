//static function example
#include <iostream>
using namespace std;
class student{
    public:
    static void greet(){
        cout<<"Welcome to the C++ class!"<<endl;
    }
};
int main(){
    student::greet(); // calling static function without creating object
    return 0;
}