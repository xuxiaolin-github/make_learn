#include <iostream>
#include "test.h"

using namespace std;

int ADD_SUB::add(int a, int b){
        cout << "a + b = " << a + b << endl;
        return a + b;
    }

int ADD_SUB::sub(int a, int b){
    cout << "a - b = " << a - b << endl;
    return a - b;
}