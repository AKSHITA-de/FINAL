#include<iostream>
using namespace std;
int main(){

    int a=5;
    int &b=a;

    cout<<"addres of a="<<(unsigned int)&a<<endl;
    cout<<"addres of b="<<(unsigned int)&b<<endl;

    b=3;
    cout<<a<<endl;
    cout<<b<<endl;
}