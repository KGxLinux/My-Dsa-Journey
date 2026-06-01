#include<iostream>
using namespace std;

// Search Element In 2D Array

int main() {

int X = 7;

int arr[4][3] = {1,2,3,4,5,6,9,8,9,10,11,12};

for(int i = 0 ; i < 4 ; i++) {

for(int j = 0 ; j < 3 ; j++) {

if(arr[i][j] == X) {

cout << "Got It" << " ";

 return 0;
 
 }
 
 }
 
 }
 
 return -1;
 
 }
    