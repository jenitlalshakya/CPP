#include <iostream>
using namespace std;

int main() {
    // Break and Continue in C++
    // Break exit the whole loop once the condition is satisfied
    cout<<"This is break:"<<endl;
    for (int i = 0; i <= 5; i++) {
        if (i == 3) {
            break;  // here when the value of i = 3. It breaks the loop (exit)
        }
        
        cout<<i<<endl;
    }

    // Continue
    // Continue runs the loop as it is but once the condition is meet it pass to the next value (skip)
    cout<<"This is continue:"<<endl;
    for (int i = 0; i <= 5; i++) {
        if (i == 3) {
            continue;   // here when the value of i = 3 it skip the loop and continue the loop like normal
        }

        cout<<i<<endl;
    }

    return 0;
}