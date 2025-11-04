//string
#include <iostream>
using namespace std;
 int main(){
    string str ="kanak";
string rev="";
int n=str.length();
bool flag=true;
   /* int len=str.length();
    cout<<str<<endl<<len<<endl;

    for(int i=0;i<12;i++){
        cout<<str[i]<<" ";*/

       // str.append(" hello");

//string temp=str.substr(0,9);


      /* temp.push_back('h');
       temp.pop_back();

               temp.pop_back();
                       temp.pop_back();
                               temp.pop_back();
        cout<<temp<<" ";*/
for(int i=0,j=n-1;i<=j;i++,j--){
     if(str[i]!=str[j]){
    flag=false;
            break;
    }
}
cout<<"yes";
 }
    