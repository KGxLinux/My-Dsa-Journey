#include<iostream>
#include <vector>
#include <array>
using namespace std;

// Remove Duplicates from Sorted Array

vector <int> nums = {3,3,3,4,6,7,8,8,8,8,9,9,9,10,12,12,14,15,16};

int main() {

int i = 0;
int j = 1;

while(j < nums.size()){

if(nums[i] != nums[j]) {

i++;

nums[i] = nums[j] ;

}

j++;

}

cout << i+1;

return 0;

}