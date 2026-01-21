#include <iostream>
using namespace std;

class Employee {
    int id;
    static int count;   // static variable is shared be all the objects of similar class

    public:
        void setData(void) {
            cout<<"Enter the id:"<<endl;
            cin>>id;
            count++;
        }

        void getData(void) {
            cout<<"The id of the employee is "<<id<<" and this is the employee number "<<count<<endl;
        }

        static void getCount(void) {    // static function have access to static variables / members only
            // cout<<id;   // throws an error
            cout<<"The value of count is "<<count<<endl;
        }
};

// count is the static data member of the class Employee
// :: is called Scope Resolution Operator
int Employee::count;    // Default value is 0

int main() {
    Employee ram, hari, sita, harry;
    ram.setData();
    ram.getData();
    Employee::getCount();   // this is how we run static function
    
    hari.setData();
    hari.getData();
    Employee::getCount();
    
    sita.setData();
    sita.getData();
    Employee::getCount();
    
    harry.setData();
    harry.getData();
    Employee::getCount();

    return 0;
}