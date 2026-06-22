#include<iostream>
#include <vector>
#include <array>
using namespace std;

// Add Digits

int num = 245;

int main() {

while(num > 9){

int ans = 0 ,rem;

while(num!= 0){

rem = num%10;

num /= 10 ;

ans = ans + rem;

}

num = ans;

}

cout << num;

}


