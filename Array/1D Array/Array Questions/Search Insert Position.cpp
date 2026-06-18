#include<iostream>
#include <vector>
#include <array>
using namespace std;

vector <int> nums = {1,3,4,5,7,8,10,15,19,20,23,25,26,28,29,30};

// Search Insert Position

int main(){

int target = 25;
int start = 0;
int end = nums.size()-1;

while(start <= end){

int mid = (start+end)/2;

if(nums[mid] == target){

cout << mid;
return 0;

}

else if(nums[mid] < target){

start = mid + 1;

}

else{

end = mid - 1 ;

}

}

cout << start;

}