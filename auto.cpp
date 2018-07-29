#include<iostream>
using namespace std;
int main(){

    auto x = 5;
    auto y = 6.7;
    auto ptr = &x;
    cout<< typeid(x).name()<<endl;
    cout<< typeid(y).name()<<endl;
    cout<< typeid(ptr).name()<<endl;
    return 0;
}