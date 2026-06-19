#include<iostream>
#include <vector>
#include <array>
using namespace std;

vector <int> arr = {1,2,3,4,5,10,15,18,19,24,27,28,29,31,35,34,31,30};

// Peak Index In a Mountain Array

int main() {

int start = 0;

int end = arr.size()-1;

int mid;

while(start<= end) {

mid = end + (start-end)/2;

if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){

cout << mid;

return 0;

}

else if(arr[mid] < arr[mid+1]){

start = mid+1;

}

else {

end = mid-1;

}

}

cout << -1;

}