#include<iostream>
using namespace std;

// Rotate Matrix In 90 Degree

int main() {
// Transpose of Matrix
int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

for (int i = 0 ; i < 3 ; i++) {

for (int j = i+1 ; j < 4 ; j++) {

swap(arr[i][j],arr[j][i]);

}

}
// Reverse Row Of Matrix
for(int i = 0 ; i < 4 ; i++) {

int start = 0;
int end = 3;

while(start<end) {
swap(arr[i][start],arr[i][end]);

start++;
end--;

}
for(int j = 0 ; j < 4 ; j++) {

cout << arr[i][j] <<" ";
}
}

}





    