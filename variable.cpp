#include <iostream>
using namespace std;

int glo = 6;    // Global variable
void sum() {
    cout<<"This is global variable "<<glo;  // Here global variable have high preference. (Global variable dominate Local variable)
}

int main() {
    int a = 4, b = 5;
    float pi = 3.14;
    char c = 'c';
    int glo = 10;   // Local variable
    bool is_true = true;    // true = 1 and false = 0

    cout<<"The value of a is "<<a<<".\nThe value of b is "<<b;
    cout<<"The value of PI is "<<pi<<".\n";
    cout<<"The character is "<<c<<".\n";
    cout<<"This is local variable "<<glo<<" "<<is_true<<"\n";  // Here Local variable have high preference. (Local vaiable dominate Global variable)
    cout<<"This is how you access global variable using scope resolution operator "<<::glo<<endl;   // scope resolution operator is '::'

    sum();
    return 0;
}