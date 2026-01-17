#include <iostream>
#include <string>
using namespace std;

class Binary {
    private:
        string s;   // By default class members are private
        void chk_bin(void);

    public:
        void read(void);
        void ones_complement(void);
        void display(void);
};

void Binary::read(void) {
    cout<<"Enter a binary number: "<<endl;
    cin>>this->s;
}

void Binary::chk_bin(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
    cout<<"Binary format is correct"<<endl;
}

void Binary::ones_complement(void) {
    chk_bin();
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == '0') {
            s.at(i) = '1';
        } else if (s.at(i) == '1') {
            s.at(i) = '0';
        }
    }
}

void Binary::display(void) {
    for (int i = 0; i < s.length(); i++) {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main() {
    Binary b;
    b.read();
    // b.chk_bin();
    b.ones_complement();
    b.display();

    return 0;
}