#include <iostream>
#include <deque>
using namespace std;

int main(){
 deque<int> d={1,2,3,4,5,6,7};
 // same as list but give random access;
 cout << "Element 5th = " <<d[5] << endl;
    return 0;
}