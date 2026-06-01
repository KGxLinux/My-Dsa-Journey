#include<iostream>
using namespace std;

// Search Element In 2D Array using Function

int printrol(int arr[][3], int row , int col , int X) {


for(int i = 0 ; i < row ; i++) {

for(int j = 0 ; j < col ; j++) {

if(arr[i][j] == X) {
return 0;
 }
 
 }
 
 }
 return -1;
 }
 
 int main() {
 
 
int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};

 
 int result = printrol(arr,4,3,7);
 
 cout << result; //0 means mil gaya -1 means nhi mila
 }
    