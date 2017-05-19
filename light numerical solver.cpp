//============================================================================
// Name        : light.cpp
// Author      : 
// Version     :
// Copyright   : Open-source project under http://tejaswibishnoi.tk
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Light numerical solver is devloped of Tejaswi Bishnoi as an open-source software" << endl << "Source code available at Github.com under username Tejaswi29" << endl;
    double v, u;
    cout << "Enter the value of u" << endl;
    cin >> u;
    cout << "Enter the value of v" << endl;
    cin >> v;
    double h;
    double m = 1/u;
    double g = 1/v;
    h = m + g;
    double f = 1/h;
    cout << "value of f is " <<  f;
    return 0;
}
