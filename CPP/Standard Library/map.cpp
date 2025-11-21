#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    map<string, int> m= {{"TV",50},{"AC",40}};
    m["Drone"]=100;
    m["PC"]=120;
    
    for(auto it: m){
        cout << it.first << " " << it.second<< endl;
    }
    cout << m.count("Drone") << endl;
    
    multimap<char, int> m1= {{'a',93},{'b',94}, {'a',91}};
    for(auto it: m1){
        cout << it.first << " " << it.second << endl;
    }

    unordered_map<string, int> m3 = {{"Laptop", 82}, {"TV", 100}, {"Drone", 150}};
    for(auto it: m3){
        cout << it.first << " "<< it.second << endl;
    } 
    return 0;
}