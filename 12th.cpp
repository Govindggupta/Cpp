// Pointers
// what is pointer --> it is kind of a dtatype hold the address of other datatypes

#include<iostream>
using namespace std;

int main() {
    int a = 3;
    int * b = &a;

    // & --> (address of) operator , it show add of a variable 
    cout<<&a<<endl;

    // * ==> (value at) derefrence operator , matbal 
    cout<<*b<<endl;

    // pointer to pointer 
    int ** c = &b;
    cout<<&b<<endl;


    cout<<c<< endl; // this shows value stored in c i.e i.e, address of b 
    cout<<*c<<endl; // this show value stored in b  i.e, address of a 
    cout<<**c<<endl; // this shows value store in a i.e, 3 



    return 0;
}