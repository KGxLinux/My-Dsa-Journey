#include <iostream>
using namespace std;

void print(int n) {

    // Print all odd number from n to 1 using recursion

    if (n <= 0) {
        return;
    }
    
    cout << n << endl;

    print(n-2);
}



int main() {

    int n = 58;

    if(n % 2 == 0){
        
        print(n-1);

        return 0;
    }
    else { 
        
        print(n);
    }
}