#include <iostream>
using namespace std;

    // Print all numbers from 1 to n using recursion

void print(int i, int n) {

    if(i == n) {

        cout << i << endl;

        return;

    }
    cout << i << endl;
    print(i + 1, n);
}

int main() {

    int n =  50;
    int i = 1;
    print(i, n);
}