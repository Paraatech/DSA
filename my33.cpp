#include <iostream>
using namespace std;
class student{
   
    int age,roll;
public:
    void setdata(int a,int r){
        age=a;
        roll=r;
    }
    void getdata(){
        cout<<"age:"<<age<<endl;
        cout<<"roll:"<<roll<<endl;
    }
};
 int main() {
        student s1;  
        //s1.setdata(20,101);
        //s1.getdata();
       
        
        student *ptr = &s1;
        ptr->setdata(20,101);
        ptr->getdata();
        return 0;
    
}