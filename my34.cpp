//array of objects

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
        cout<<age<<endl;
        cout<<roll<<endl;
    }
};
 int main() {
    
       int size=5;

        student *s = new student[size];
        student* head=s;
        for(int i=0;i<size;i++){
            int age,roll;
        
            cin>>age>>roll;
           s->setdata(age,roll);
              s++;
        }
        for(int i=0;i<size;i++){
            
            head->getdata();
            head++;
        }
    }
