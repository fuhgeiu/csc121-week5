/*
program
alex carnes 6/6
*/


#include <iostream>
#include <vector>
#include <string>

using namespace std;


void get_name(vector <string>&, char[]);                // function to get and store names in container

int main () {

    vector <string> my_vector;                                          // container for names
    char vowel[5] = {'a','e','i','o','u'};         // container for vowels

    get_name(my_vector,vowel);                                  // gets names

    return 0;
}



void get_name(vector <string> &my_vector,char vowel[]){

    string IS;                                          // data type for conatiner
    bool c = true;                                      // for loop

    while (c) {
        cout << "enter name, type exit to stop\n\n";    // prompt
        getline (cin,IS);                         // gets names
        if (IS == "exit") break;                        // exit sequence
        my_vector.push_back(IS);                        // stores names
        int found = 0;

// to find vowels and incrament
        for (int i = 0; i < sizeof IS; i ++) {                  // incraments by char in name string

            for (int k = 0; k < 5; k++) {                       // compares vowels to char of string
                if (tolower(IS[i]) == vowel[k]) {found ++; cout << "found " << vowel[k] << endl;}
            }
        }
        cout << "found " << found << " vowels\n\n";
    }

}