#include<iostream>
#include <vector>
#include <array>
using namespace std;

// Search in Rotated Sorted Array

vector <int> nums = {6,7,8,9,10,12,14,3,4,5};

int main() {

int start = 0;
int end = nums.size()-1,mid;
int ans = -1;
int target = 9;
        
while(start <= end){

mid = (start+end)/2;

if(nums[mid] == target){

cout << mid;

return 0;

}

else if(nums[0] <= nums[mid]){

if(nums[start] <= target && nums[mid] >= target){

end = mid-1;

}

else {

start = mid+1;

}
                
}

else{

if(target >= nums[mid] && nums[end] >= target){

start = mid+1;

}

else{

end = mid-1;

}

}

}

cout << -1;

return 0;

}
