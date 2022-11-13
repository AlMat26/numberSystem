#include <iostream>
#include <vector>

using namespace std;

void func () {

    int inputNumber;
    int outputNumberSystem;

    cin >> inputNumber;
    cin >> outputNumberSystem;

    int remainder = inputNumber; //остаток
    vector <int> outputNumber;

    /*for ( unsigned int j = 0; j < outputNumber.size (); j++ ) {
        outputNumber [j] = 0;
    }*/

    while ( remainder >= outputNumberSystem ) {

        int priv = remainder / outputNumberSystem; //частное
        outputNumber.push_back ( remainder%outputNumberSystem );
        remainder = priv;
    }
    outputNumber.push_back (remainder);

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
