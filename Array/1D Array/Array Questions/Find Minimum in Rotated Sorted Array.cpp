#include<iostream>
#include <vector>
#include <array>
using namespace std;

// Find Minimum in Rotated Sorted Array

vector <int> nums = {6,7,8,9,10,12,14,3,4,5};

int main() {
int start = 0;
int end = nums.size()-1,mid,ans;

if(nums[start] <= nums[end]){

cout << nums[start];

return 0;

}

while(start <= end){

mid = (start+end)/2;

if(nums[0] <= nums[mid]){

start = mid+1;

}

else if(nums[0] > nums[mid]) {

ans = nums[mid];

end = mid-1;

}
                
}

cout << ans;

return 0;

}