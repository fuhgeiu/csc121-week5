/*
program
alex carnes 6/6
*/

// call by reference, instead of copy, the value at memory is accesed and can be modified and stored at memeory

// call by value, copy of variable to be used once throgh function and than destroyed after func is completed


#include <iostream>

using namespace std;

void xvalue(int);
void yreference(int&);




int main () {

    int x,y;

    cout << "enter x"; cin >> x;
    cout << "enter y"; cin >> y;

    xvalue(x);                          // call func modify x

    yreference(y);                   // call func modify y

    cout << x << "," << y;


    return 0;
}


void xvalue(int x) {            // by value

    cout << "pass by value";

    x = (x*x);
}


void yreference(int &y) {       // by reference

    cout << "pass by referenc";

    y = (y*y);
}