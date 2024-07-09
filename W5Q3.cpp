/*
program
alex carnes 6/6
*/

#include <iostream>


using namespace std;

int a;                                  // global variable

void protect();
void a_counter();                       // gloabl counter
void b_counter();                       // static counter
void c_counter(int&);                   // pass local from main


int main () {

    int c = 0;
    bool l = true;

    while (l) {

        char user;
        cout << "enter a letter\n"; cin >> user; protect(); cout << "\n";

        if (tolower(user) == 'a') a_counter();
            else if (tolower(user) == 'b') b_counter();
                else if (tolower(user) == 'c') c_counter(c);
                    else if (user == 'q') break;
                        else cout << "invalid input";

    }

    cout << "program end";  return 0;
}

void protect() {

    bool c = 1;
    while (c) {
        if (cin.fail()) {                       // if stream error
            cout << "incorrect input \n";
            cin.clear();                        // clears buffer
            cin.ignore();                       // ignores data from stream
        } else break;
    }
}

void a_counter() {

    cout << "a counter function\n";
    a++;
    for (int i = 0; i < a; i++) cout << 'A';
    cout << "\n\n";
}

void b_counter() {

    static char b;

    cout << "b counter funtion\n";
    b++;
    for (int i = 0; i < b; i++) cout << 'B';
    cout << "\n\n";

}

void c_counter(int &c) {

    cout << "c counter funtion\n";
    c++;
    for (int i = 0; i < c; i++) cout << 'C';
    cout << "\n\n";

}