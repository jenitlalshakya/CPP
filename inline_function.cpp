#include <iostream>
using namespace std;

inline int product(int a, int b) {  // inline function copies the output to the function direct so whenever inline function is called it directly provided value without running function evertime
    // Not recommanded to use below lines with inline function
    // static int c = 0;
    // c = c + 1;
    return a * b;
}

// Note: use inline function for small program only
// don't use inline function for recursion

int main() {
    int num1, num2;
    cout<<"Enter the value for num1:"<<endl;
    cin>>num1;
    cout<<"Enter the value for num2:"<<endl;
    cin>>num2;
    cout<<"The product of num1 and num2 is: "<<product(num1, num2)<<endl;
    cout<<"The product of num1 and num2 is: "<<product(num1, num2)<<endl;
    cout<<"The product of num1 and num2 is: "<<product(num1, num2)<<endl;
    cout<<"The product of num1 and num2 is: "<<product(num1, num2)<<endl;

    return 0;
}