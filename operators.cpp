#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the operators in C++:"<<endl;
    // Arithematic Operators;
    cout<<"The value of a + b is: "<<a+b<<endl;
    cout<<"The value of a - b is: "<<a-b<<endl;
    cout<<"The value of a * b is: "<<a*b<<endl;
    cout<<"The value of a / b is: "<<a/b<<endl;
    cout<<"The value of a % b is: "<<a%b<<endl;
    cout<<"The value of a++ is: "<<a++<<endl;
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of a-- is: "<<a--<<endl;
    cout<<"The value of --a is: "<<--a<<endl;
    cout<<"The value of b++ is: "<<b++<<endl;
    cout<<"The value of ++b is: "<<++b<<endl;
    cout<<"The value of b-- is: "<<b--<<endl;
    cout<<"The value of --b is: "<<--b<<endl;
    cout<<endl;

    // Comparison Operators
    cout<<"a==b "<<(a==b)<<endl;
    cout<<"a!= "<<(a!=b)<<endl;
    cout<<"a<= "<<(a<=b)<<endl;
    cout<<"a>= "<<(a>=b)<<endl;
    cout<<"a>b "<<(a>b)<<endl;
    cout<<"a<b "<<(a<b)<<endl;
    cout<<endl;

    // Logical Operators
    cout<<"The value of this Logical AND Operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this Logical OR Operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this Logical NOT Operator (!(a==b)) is: "<<(!(a==b))<<endl;
    cout<<endl;
}