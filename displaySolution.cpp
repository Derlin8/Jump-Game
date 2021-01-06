//
// Created by Derek Lin on 10/30/19.
//

#include "displaySolution.h"
#include <iostream>
using namespace std;
void displaySolution(std::vector <int> final)
{
    cout << "The solution is: {";
    for(auto s : final){
        if (s == final.back()) {
            cout << s;
            break;
        }
        cout << s << ", ";
    }
    cout << "}" << endl;
}
