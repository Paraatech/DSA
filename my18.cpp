 #include <iostream>
 using namespace std;

 class math{
    public:
    int a,b;

    void sum(int x,int y){
        cout<<x+y<<endl;

        
    }

    void sumoffournums(int x,int y,int z,int p);
 };
//non inline member function
  void math :: sumoffournums(int x,int y,int z,int p){
    cout<<x+y+z+p;
 }
 int main(){
    math m;
    m.sum(5,9);
   
    m.sumoffournums(3,4,5,6);
 }

