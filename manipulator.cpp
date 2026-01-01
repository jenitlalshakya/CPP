#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Manipulator in C++
    int a = 3, b = 78, c = 123;
    // Normal output
    cout<<"The value of a without setw is "<<a<<endl;
    cout<<"The value of b without setw is "<<b<<endl;
    cout<<"The value of c without setw is "<<c<<endl;

    // using setw from 'iomanip'
    cout<<"The value of a with setw is "<<setw(5)<<a<<endl;
    cout<<"The value of b with setw is "<<setw(5)<<b<<endl;
    cout<<"The value of c with setw is "<<setw(5)<<c<<endl;
    
    return 0;
}