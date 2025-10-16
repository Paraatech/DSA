#include <iostream>
using namespace std;

union student{
   
    string name;    
    int age;
};
int main(){
    student s1;
    s1.name="paras";    
    s1.age=19;
    cout<<s1.name<<" "<<s1.age;

}