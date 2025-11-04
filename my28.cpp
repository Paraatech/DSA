// Static Data Members in C++
#include <iostream>
using namespace std;
 class student{
    public:
    static int count;

    student(){
        count++;
    }
};
int student :: count=0; // initialize static variable
int main(){
    student s1;
    student s2;
    student s3;

    cout<<"Total students: "<<student::count<<endl;
    return 0;
}