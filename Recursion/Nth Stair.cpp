#include<iostream>
using namespace std;

// nth Star

int gcd(int a , int b) {

if(b == 0){
            
            cout << a;
            
            return 0;
        }
        
        cout << gcd(b,a%b);
        
        return 0;
        
        }
        
int main() {

gcd(42,18);

}
    