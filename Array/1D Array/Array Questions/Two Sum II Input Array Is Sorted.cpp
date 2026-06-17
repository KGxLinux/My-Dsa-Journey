#include<iostream>
#include <vector>
#include <array>
using namespace std;

// Two Sum II Input Array Is Sorted

int main(){

vector<int> numbers = {1,4,6,7,8,9,10,23,45,55};
int target = 19;

int n = numbers.size();
        
int i = 0;

int j = numbers.size()-1;

while(i < j){

int a = numbers[i]+numbers[j];

if(a == target){

cout << i+1 << " " << j+1;

return 0;

}

else if(a < target){

i++;
      
}

else if(a > target){

j--;

}

}

cout << -1;

}