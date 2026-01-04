#include <iostream>
using namespace std;

// Structure, Union and enum in C++
struct student {
    string name;
    int age;
    int id;
};

union employee {
    char c;
    int id;
    float salary;
};

int main() {
    student s1;
    s1.name = "Ram";
    s1.age = 30;
    s1.id = 11222;

    cout<<"Name: "<<s1.name<<endl;
    cout<<"age: "<<s1.age<<endl;
    cout<<"id: "<<s1.id<<endl;

    employee e1;
    e1.c = 'j';
    // e1.id = 1223;
    // union can contain single datatype at a time so when you assign more than one value the previous assigned will be removed

    cout<<"Character: "<<e1.c<<endl;
    // cout<<"id: "<<e1.id<<endl;   // uncomment to see the result

    enum Meal{
        breakfast,
        lunch,
        dinner
    };

    Meal m1 = breakfast;    // enum assign index to the variable according to whole number (start with 0)
    Meal l1 = lunch;
    Meal d1 = dinner;

    cout<<"enum output: "<<m1<<endl;
    cout<<"enum output: "<<l1<<endl;
    cout<<"enum output: "<<d1<<endl;

    return 0;
}