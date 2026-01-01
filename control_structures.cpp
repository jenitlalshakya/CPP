#include <iostream>
using namespace std;

int main() {
    // Control Structures in C++
    // 1. Sequence structure
    // 2. Selection structure
    // 3. Loop structure

    // if-else statement
    int a = 1;
    if (a < 3) {
        cout<<"a is less than 3. Value of a is "<<a<<endl;
    } else {
        cout<<"a is greater than 3."<<endl;
    }

    // if else-if else ladder
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;

    if (age < 12) {
        cout<<"Your are child."<<endl;
    } else if (age >= 12 && age < 18) {
        cout<<"You are at your adolecent."<<endl;
    } else {
        cout<<"You are adult."<<endl;
    }

    // swtich
    switch (age) {
        case 18:
            cout<<"Your age is 18."<<endl;
            break;

        case 19:
            cout<<"Your age is 19."<<endl;
            break;

        case 20:
            cout<<"Your age is 20."<<endl;
            break;

        case 21:
            cout<<"Your age is 21."<<endl;
            break;

        case 22:
            cout<<"Your age is 22."<<endl;
            break;

        default:
            cout<<"No special cases."<<endl;
            break;
    }

    return 0;
}