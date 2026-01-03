#include <iostream>
using namespace std;

int main() {
    int marks[] = {23, 75, 49, 57, 64, 45};
    int size = sizeof(marks) / sizeof(marks[0]);    // this helps us to get the total length of the array

    // using for loop
    cout<<"Array outpout using for loop:"<<endl;
    for (int i = 0; i < size; i++) {       // here value for 'i' only exist for 'for loop' only
        cout<<"The value at index "<<i<<" is "<<marks[i]<<endl;
    }
    cout<<endl;
    
    // using while loop
    cout<<"Array outpout using while loop:"<<endl;
    int i = 0;
    while (i < size) {
        cout<<"The value at index "<<i<<" is "<<marks[i]<<endl;
        i++;
    }
    cout<<endl;
    
    // using do while loop
    int c = 0;
    cout<<"Array outpout using do while loop:"<<endl;
    do {
        cout<<"The value at index "<<c<<" is "<<marks[c]<<endl;
        c++;
    } while (c < size);
    cout<<endl;

    // Pointers in array
    // array itself is a pointer so we don't need to use '&' while assigning the value
    int* p = marks;
    for (int i = 0; i < size; i++) {
        cout<<"The value of marks["<<i<<"] is "<<*(p+i)<<endl;
    }
    
    return 0;
}