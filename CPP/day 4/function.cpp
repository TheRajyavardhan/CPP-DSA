#include <iostream>
using namespace std;

void fun(){
    cout << "hello world"<< endl;
    return ;
}

int min(int a, int b){
    if ( a<b) return a;
    else return b;
}

int main() {
    cout << "this is min = " << min(3,2) << endl;
    fun();
    return 0;

}