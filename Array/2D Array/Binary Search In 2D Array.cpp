#include<iostream>
using namespace std;

//Binary Search In 2D Array

int main() {

int arr[4][5]= {2,6,10,14,18,20,24,27,29,38,47,52,78,93,102,108,111,200,218,320};
int m = -1;
for(int i = 0 ; i < 4 ; i++){

int start = 0;
int end = 4;
int mid = 0;
int X = 52;

while(start<=end) {

mid = (start + end)/2;

if(arr[i][mid] == X) {

cout << "Got It" << " ";

m = 1;

break;

}

else if(arr[i][mid] < X) {

start = mid+1;

}

else { end = mid-1;
}

}

}

cout << m;

}