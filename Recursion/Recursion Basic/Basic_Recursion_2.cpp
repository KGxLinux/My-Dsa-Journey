#include <iostream>
using namespace std;
void printNumbers(int n) {

    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    cout << n << endl;
    printNumbers(n - 1);

}
int main(){
// Print Number n to 1 using Recursion
    int n = 100;

    printNumbers(n);
    
}