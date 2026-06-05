#include<iostream>
using namespace std;

//Binary Search In 1D Array

int main() {

int arr[8]= {2,6,10,14,18,20,24,27};
int m = -1;

int start = 0;
int end = 7;
int X = 20;

while(start<=end) {

int mid = (start + end)/2;

if(arr[mid] == X) {

cout << "Got It" << " ";

m = 1;

break;

}

else if(arr[mid] < X) {

start = mid+1;

}

else { end = mid-1;
}

}
cout << m;
}



