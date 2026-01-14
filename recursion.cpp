#include <iostream>
using namespace std;

long long fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    
    return n * fact(n - 1);
}

int main() {
    int num;
    cout<<"Enter any number to get factorial:"<<endl;
    cin>>num;
    cout<<"The factorial of "<<num<<" is: "<<fact(num)<<endl;

    return 0;
}