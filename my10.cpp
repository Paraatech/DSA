#include <iostream>
using namespace std;
class animals{
    public:
    string speak;
    string type;
    string color;

};
int main(){
    animals dog;
    dog.speak="bark";
    dog.type="mammal";
    dog.color="black";

    animals cat;
    cat.speak="meow";
    cat.type="mammal";
    cat.color="white";

    cout<<"dog speaks: "<<dog.speak<<endl;
    cout<<"dog type: "<<dog.type<<endl;
    cout<<"dog color: "<<dog.color<<endl;

    cout<<"cat speaks: "<<cat.speak<<endl;
    cout<<"cat type: "<<cat.type<<endl;
    cout<<"cat color: "<<cat.color<<endl;

}
   