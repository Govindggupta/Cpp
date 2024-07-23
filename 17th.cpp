// Inline Functions, Default Arguments & Constant Arguments 



#include<iostream>
using namespace std;
// inline function
// when you need to decrease the run time of your function, use inline, but only if the function is not large and does not take more memory storage
inline int sum(int a, int b) {
    return a * b;
}
// static int c = 4 // this runs only once i.e, static runs only once
// static should not be used in inline function 

// // Default function
// int product(int a, int b = 2) {
//     return a * b;
// }

// // Constant function
// int product(const int a, const int b) { // The const keyword in the function parameters ensures that the values of a and b cannot be changed inside the product function
//     return a * b;
// }

int main() {
    cout << sum (2,3);
    return 0;
}