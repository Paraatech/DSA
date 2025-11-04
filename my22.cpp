//reccursion example
 
#include <iostream>
using namespace std;
int n=1;    
void printNumbers(int n) {
    if(n <=0){
        return;
    }
    cout << n << " ";
   n--;
    printNumbers(n);
}

int main() {
    printNumbers(5) ;
    return 0;
}
