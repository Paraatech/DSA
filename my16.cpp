#include <iostream>
using namespace std;
enum Color { RED, GREEN, BLUE };
int main(){
    Color c ;
    c = GREEN;
    if(c == RED){   
        cout<<"Color is RED";
    }
    else if(c == GREEN){
        cout<<"Color is GREEN";
    }
    else if(c == BLUE){
        cout<<"Color is BLUE";
    } 
    
}
