// loops
#include<iostream>
using namespace std;

int main(){
    // 3 type of loop are there in c++

    // 1. for loop 
    for (int i = 0; i < 11; i++)
    {
        cout<<i<<"for loop walla "<<endl;
    }
    
    // 2.while loop 
    int i = 0 ;
    while (i<11)
    {
        cout<<i<<endl;
        i++;
    }
    
    // 3. do while 
    // do while ka matbal ye hai ki tumhara loop ek bar to chalega hi fir condition check hogi 
    int a = 0;
    do
    {
        cout<<a <<"do whike loop walla"<<endl;
        a++;
    } while (a<11);
    
    return 0 ;
}