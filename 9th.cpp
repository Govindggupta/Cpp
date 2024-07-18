// control structure.. if-else and switch case


// there are 3 type of structure 
// 1. sequence str
// iske ander apna normal code jo chalta hai vo aata hai 
//  2. selection str 
//  isme apna if-else , switch case aata hai ....matbal jaha select karna padta hai 
#include<iostream>
using namespace std ;

int main(){
    // int a ;
    // cout<<"enter your age :";
    // cin>>a;
    // if (a >= 18)
    // {
    //     cout<<"you can vote "<<endl;
    // }
    // else{
    //     cout<<"you can not vote "<<endl;
    // }
    

    int a ;
    cout<<"enter your number :";
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"you number id "<<a<<endl;
        break;
    //and many more 
    //expression and const-expression have to equate if true that case is taken 
    
    default:
        break;
    }

    return 0 ;
}
//  3. loop str 
// apna loops isme aat ahai 