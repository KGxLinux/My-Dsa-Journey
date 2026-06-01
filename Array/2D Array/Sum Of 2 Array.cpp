#include <iostream>
using namespace std;
// Add 2 array
int main() {

int arr1[3][4] = {2,3,4,5,0,1,2,3,1,2,6,4};
int arr2[3][4] = {3,4,1,2,2,2,2,0,1,3,5,4};

int arr3[3][4];

for(int row = 0 ; row < 3 ; row++){

for(int col = 0 ; col < 4 ; col++){

arr3[row][col] = arr1[row][col] + arr2[row][col];

}

}

for (int row = 0 ; row < 3 ; row++) {

for (int col = 0 ; col < 4 ; col++) {

cout << arr3[row][col] << " ";

}

cout << endl;

}

}