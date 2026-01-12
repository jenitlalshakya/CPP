#include <iostream>
using namespace std;

// Swap variable using pointer
void swapPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Swap using Reference variable
void swapReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 2, b = 4, c = 5, d = 10;
    cout<<"The value of a is: "<<a<<" and the value of b is "<<b<<endl;
    swapPointer(&a, &b);
    cout<<"The value after pointer swap of a is: "<<a<<" and the value of b is "<<b<<endl;
    cout<<"The value of c is: "<<c<<" and the value of d is: "<<d<<endl;
    swapReference(c, d);
    cout<<"The value after reference swap of c is: "<<c<<" and the value of d is: "<<d<<endl;
    return 0;
}