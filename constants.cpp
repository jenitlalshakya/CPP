#include <iostream>
using namespace std;

int main() {
    const int a = 45;
    cout<<"The value of a is "<<a<<endl;

    // we cannot change the value of a
    // a = 55;
    // cout<<"The value of a after change is "<<a<<endl;
    // Here we get error: "error: assignment of read-only variable 'a'
    //  a = 55;"

    return 0;
}