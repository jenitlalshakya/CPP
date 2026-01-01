#include <iostream>
using namespace std;

int glo = 6;    // Global variable
void sum() {
    cout<<"This is global variable "<<glo<<endl;  // Here global variable have high preference. (Global variable dominate Local variable)
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
    
    // Float, double and long double Literals
    // By default decimal value (33.3) is count as 'double' so for float we use (33.3f)
    float d = 33.3f;
    long double e = 33.3;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    cout<<"The size of 33.3 is "<<sizeof(33.3)<<endl;
    cout<<"The size of 33.3f is "<<sizeof(33.3f)<<endl;
    cout<<"The size of 33.3l is "<<sizeof(33.3l)<<endl;

    // Reference Variables
    float x = 455;
    float &y = x;

    cout<<x<<endl;
    cout<<y<<endl;

    // Typecasting
    int t = 55;
    float u = 44.44;
    cout<<"The value of t is "<<(float)t<<endl;
    cout<<"The value of t is "<<float(t)<<endl;

    // When you convert float to integer that digits after decimal will be removed
    cout<<"The value of u is "<<(int)u<<endl;
    cout<<"The value of u is "<<int(u)<<endl;
    
    // lets take example 99.99 than the value after integer typecast will be 99
    // It will not be 100 (round of)
    float v = 99.99;
    cout<<"The value of 99.99 after Interger Typecast is "<<int(v)<<endl;
    
    return 0;
}