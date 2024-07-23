#include<iostream>
using namespace std;

int main() {
    // Arrays
    int marks[4] = {1,2,3,4};
 
    marks[1] = 23 ; // we can change array i.e, arrays are mutable
    // cout<<marks[1] ;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<marks[i]<<endl;
    // }
    

    // Pointers and Arrays 
    // @. in array for address write name of array i.e, marks not &marks ==> wring 
    // @. writing only marks shows add of 1st element only 

    int * p = marks;
    cout<<*p <<endl ;
    cout<<*(p+1) <<endl ;
    cout<<*(p+2) <<endl ;
    cout<<*(p+3 )<<endl ;

    return 0;
}