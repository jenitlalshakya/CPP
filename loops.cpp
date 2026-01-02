#include <iostream>
using namespace std;

int main() {
    // Note: don't use infinite loop. It can hamper your processor
    // There are 3 type of loops in C++:
    // 1. for loop
    // syntax:
    // for (initialization; condition; updation) {
    //     loop body
    // }

    cout<<"For Loop:"<<endl;
    for (int i = 0; i <= 10; i++) {
        cout<<i<<endl;
    }
    cout<<endl;

    // 2. while loop
    // syntax:
    // initialization
    // while (condition) {
    //     loop body
    //     updation
    // }

    cout<<"While Loop:"<<endl;
    int a = 0;
    while (a <= 10) {
        cout<<a<<endl;
        a++;
    }
    cout<<endl;

    // 3. do while loop
    // syntax:
    // initialization
    // do {
    //     loop body
    //     updation
    // } while (condition);

    cout<<"Do While Loop:"<<endl;
    int b = 0;
    do {
        cout<<b<<endl;
        b++;
    } while (b <= 10);
    cout<<endl;

    return 0;
}