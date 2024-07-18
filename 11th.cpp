// breaks and continue
#include<iostream>
using namespace std;

int main() {
    for (int i = 0; i < 11; i++)
    {
        if (i==5)
            break;
        cout<<i<<endl;

    }
    // if break used after a conditioin then looop wll stop working or exit if condition gets true
    for (int i = 0; i < 11; i++)
    {
        if (i==5)
            continue;
        cout<<i<<endl;

    }
    // if continue used after is a condition then loop wil stop working or exit from there and again starts for next i 

    
    return 0;
}