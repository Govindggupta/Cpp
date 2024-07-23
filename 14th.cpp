// Structures, Unions & Enums in C++ 

#include<iostream>
using namespace std;

// struct employee
// {
//     int eid ; 
//     int roomNo ;
//     int salary ;
    
// };
// so struct  is used to create a new datatype 

typedef struct employee
{
    int eid ; 
    int roomNo ;
    int salary ;

} emp; // this method is used to write emp insted of employee everywhere


union money
{
    int rice ; 
    char wheat ;
    float grains ;

};
// in union all member share same memory and we can use one at a time i.e, max memory from all member is the memory alloted and used when ay one of them is called
// we can use one at a time 



int main() {
    
    // emp alex ;
    // alex.eid = 216;
    // alex.salary = 120000;
    // cout<< alex.eid <<endl ;
    // cout<< alex.salary <<endl ;

    // union money  m1 ;
    // m1.rice = 34;
    // // m1.wheat = 'a'; // when we use both at the same time it would give garbage value 
    // cout<<m1.wheat <<endl ;
    

    enum Meal{breakfast , lunch , dinner};
    cout << breakfast <<endl ;
    cout << lunch <<endl ;
    cout << dinner <<endl ;
    // so this give a inter to he variable in the enum in order we save 

    Meal m1 = dinner;
    cout << m1 <<endl ; // in this way we can number to a variable by giving it variable in enum

    return 0;
}