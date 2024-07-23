// Call by Value & Call by Reference 

// Call by value is nothin but sum of two number --> sum(a, b) where you give value of a varible in it 


#include<iostream>
using namespace std;

// int swap(int num1 ,int num2) {
//     int temp = num1 ;
//     num1 = num2 ;
//     num2 = num1;
// } // this will never swap values becoz in this only num1 and num2 are swaped not a and b 

// int swap(int *num1 ,int * num2) {
//     int temp = *num1 ;
//     *num1 = *num2 ;
//     *num2 = temp;
// } // using pionter and changing value at address

int swap( int &num1 , int &num2 ){
    int temp = num1 ;
    num1 = num2 ;
    num2 = num1;
} // using refrence variable 
 
int main() {
    int a = 4 , b = 5;
    cout << "before swap a is " << a << "  b is " << b <<endl ;
    // swap(a , b); // this will not swap
    // swap(&a , &b); // using pointer refrence 
    swap (a , b ) ; // using refrence variable 
    cout << "after swap a is " << a << "  b is " << b <<endl ;
    return 0;
}