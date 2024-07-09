/*
program
alex carnes 6/6
*/

// global, varibale in int main that allows it to be called from anywhere in program
// local, only exist and be modfied in the function, destroyed at end of function
// static, like local only exists in fucntion, but is not detroyed(remebers) only exists and be modfied in fucntion


#include <iostream>

using namespace std;

string global;

string localfunc ();
void globalfunc ();
void globalfunc2 (string&);
void staticfunc ();



int main () {

// for local data demo
    cout << localfunc () << endl << endl;
//    local = "454";                          // variable dosnt exist outside of the func, so we cant chnage it
// for global data demo
    global = "900\n";
    globalfunc();
    globalfunc2(global);
    cout << global << endl << endl;
// for static demo
    staticfunc();                    // start at 1, remembers it is 1
    staticfunc();                    // incraments by 1
//    statc = 5;                     // variable dosnt exist outside of func like local, but dosnt destroy at end of func

    return 0;
}


string localfunc () {
    string local;

    local = "340";

    return local;
}

void globalfunc () {

    cout << global;
}

void globalfunc2 (string &global) {

    global = "200";

}

void staticfunc () {

    static int statc = 0;

    statc ++;

    cout << statc << endl;

}
