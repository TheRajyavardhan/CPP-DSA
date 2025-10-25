#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<< "Write Your String: " ;
    string str;
    getline(cin,str,'\n');
    string part;
    cout<< "Write Your Part: ";
    cin >> part ;
    while(str.length()>0 && str.find(part)<str.length()){
        str.erase(str.find(part),3);
    }
    cout << str << endl;
              
    return 0;
}