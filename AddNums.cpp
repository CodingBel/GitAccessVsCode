#include <iostream>
using namespace std; 

int myAdder (int num1, int num2) {
    return num1 + num2; 
}

int main () {
    cout << "Adding 2 and 3, we get: " << myAdder (2, 3) << endl;
    return 0; 
}
