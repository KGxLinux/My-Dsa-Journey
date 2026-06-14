#include<iostream>
#include <vector>
using namespace std;

// Rotate Array by One
int main(){
vector <int> arr = {3,5,1,8,9,7,6};
int S = arr.size()-1;

int R = arr[S];

for(int i = S ; i >= 0 ; i--){
            
  arr[i] = arr[i-1];
        
}
  arr[0] = R;
  
  for(int i = 0 ;i < arr.size() ; i++) {
  
  cout << arr[i] << " ";
  
}
        
}