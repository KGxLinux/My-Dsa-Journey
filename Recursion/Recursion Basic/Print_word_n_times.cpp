#include <iostream>
using namespace std;

// Q1: Print "Coder" n times using Recursion

void print(int n) {
    if (n == 0) {
        return;
    }
    cout << "Coder" << endl;
    print(n - 1);
}
int main() {

    int n = 100;

    
    print(10);

}

