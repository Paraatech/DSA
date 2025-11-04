//friend class example
#include <iostream>
using namespace std;
class student{
    
    int a=4;
    friend class teacher;
    public:
    void helper2(teacher t){
        cout<<t.b<<endl ;
    }
    
};
class teacher{
    int b=5;
    public:
    void helper(student s){
        cout<<s.a<<endl;
    }
};
int main(){
    student s1;
    teacher t1;
    t1.helper(s1);
    s1.helper2(t1);
    return 0;
}