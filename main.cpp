#include <iostream>
#include <vector>
#include <string>

using namespace std;

void func () {

    const char symvols [6] = { 'A', 'B', 'C', 'D', 'E' };

    int inputNumber;
    int outputNumberSystem;

    cin >> inputNumber;
    cin >> outputNumberSystem;

    int remainder = inputNumber; //остаток
    vector <string> outputNumber;

    while ( remainder >= outputNumberSystem ) {

        int priv = remainder / outputNumberSystem; //частное

        if ( remainder%outputNumberSystem < 10 ) {
            outputNumber.push_back ( to_string( remainder%outputNumberSystem ) );
        } else {
            outputNumber.push_back ( to_string( symvols [ 10 - remainder%outputNumberSystem ] ) );
        }
        remainder = priv;
    }
    if ( remainder < 10 ) {
        outputNumber.push_back ( to_string (remainder) );
    } else {
        outputNumber.push_back ( to_string (symvols [ 10 - remainder ] ) );
    }

    for ( int j = outputNumber.size() - 1; j >= 0; j-- ) {
        cout << outputNumber [j];
    }
    cout << endl;
}

int main(){

    char input = '\0';

    while ( input != 'q' ) {
        func();
        cout << "restart? [any/q]" << endl;
        cin >> input;
    }

    return 0;
}
