#include <iostream>
using namespace std;

int sum(int a, int b) {
    cout<<"Using 2 argument function"<<endl;
    return a + b;
}

int sum(int a, int b, int c) {
    cout<<"Using 3 argument function"<<endl;
    return a + b + c;
}

int main() {
    cout<<"The sum of 5 and 6 is: "<<sum(5, 6)<<endl;
    cout<<"The sum of 5, 6 and 9 is: "<<sum(5, 6, 9)<<endl;

    return 0;
}