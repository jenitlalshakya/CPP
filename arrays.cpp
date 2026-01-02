#include <iostream>
using namespace std;

int main() {
    int a[] = {23, 75, 4, 5, 664, 45};
    int size = sizeof(a) / sizeof(a[0]);    // this helps us to get the total length of the array

    // using for loop
    cout<<"Array outpout using for loop:"<<endl;
    for (int i = 0; i < size; i++) {       // here value for 'i' only exist for 'for loop' only
        cout<<"The value at index "<<i<<" is "<<a[i]<<endl;
    }
    cout<<endl;
    
    // using while loop
    cout<<"Array outpout using while loop:"<<endl;
    int i = 0;
    while (i < size) {
        cout<<"The value at index "<<i<<" is "<<a[i]<<endl;
        i++;
    }
    cout<<endl;
    
    // using do while loop
    int c = 0;
    cout<<"Array outpout using do while loop:"<<endl;
    do {
        cout<<"The value at index "<<i<<" is "<<a[c]<<endl;
        c++;
    } while (c < size);
    cout<<endl;
    
    return 0;
}