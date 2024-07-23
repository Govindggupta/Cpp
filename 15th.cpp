// Functions & Function Prototypes

#include<iostream>
using namespace std;

// function prototyping == in this you give function ref before main if function is after main 
// int sum(int a , int b ); // acceptable 
// int sum(int a , b);-- not acceptable
int sum (int , int ) ;// acceptable 
void g() ;



int main() {
    int num1 , num2 ;
    cout << "enter two number :" ;
    cin >> num1 ;
    cin >> num2 ; 
    cout <<"sum pf  nums is :" << sum (num1 , num2)<<endl ; // this are actual parameters 
    g() ;  
    return 0;
}

// this are formal parameters
int sum (int a , int b) {
    int c ;
    c = a+b ;
    return c;
}


// if you want to give a function which return nothing you can use void 
void g() {
    cout << "happy morning " <<endl ;
}