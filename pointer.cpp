#include <iostream>
using namespace std;

int main() {
    // Pointer in C++
    // Pointer is a data type which holdss the address of other data type
    // To assign pointer variable we use '*' to declare the pointer variable
    // and '&' (Address of) to assign the content in that variable
    int a = 55;
    int* b = &a;

    // & --->(Address of) operator
    cout<<"The address of a is "<<b<<endl;

    // * ---> (Value at) Dereference operator
    // Basically * is used in pointer out to see what value is assigned to that stored address
    cout<<"The value at  address b is "<<*b<<endl;

    // Pointer To Pointer
    int** c = &b;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at c is "<<*c<<endl;   // If you are using pointer to pointer than single '*' will give the value store in other address
    cout<<"The original value is "<<**c<<endl;  // To see the original value in pointer to pointer we use '**' meaning value at(value at(c))

    return 0;
}