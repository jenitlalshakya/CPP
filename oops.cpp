#include <iostream>
using namespace std;

class Employee {
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a, int b, int c);  // Declaration
        void getData() {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee::setData(int a, int b, int c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

int main() {
    Employee jenit;
    // jenit.a = 50;   // This will throw error as 'a' is private and can only be accessed through getter and setter function.
    jenit.d = 34;
    jenit.e = 89;

    jenit.setData(1, 3, 4);
    jenit.getData();

    return 0;
}