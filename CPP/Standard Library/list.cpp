#include <iostream>
#include <list>
void displayList(std::list<int>& l){
    for(auto i=l.begin(); i!=l.end();i++)
    std::cout<<*i<<" ";
    std::cout << std::endl;
    return ;
}

int main(){
   std::list<int> l={1, 2, 3, 4};
   l.push_back(9);
   l.push_front(11);
   displayList(l);
   l.pop_back();
   l.pop_front();
   displayList(l);
//    std:: cout << l[2]; // list can't access randomly :
    return 0;
}