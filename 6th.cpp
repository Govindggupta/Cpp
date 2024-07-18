// there are 2 two type of header file 
// 1. system header file 
#include<iostream>
// 2. user defined header file : ye programmer log likhte hai --> header file made should present in  the currrent directory 

// 43 97 

using namespace std;
 
int main(){
    int a = 4 , b = 5 ;
    cout<<"arithmatic operator"<<endl; //endl is used for new line 
    cout<< a+b << a-b << a*b << a/b << a%b << a++ << a-- << ++a << --a ;
    cout<<"comparision operator == != >= <= < > ";
    cout<< "logical operator && || !";

    return 0;
}