#include<iostream>
#include <vector>
#include <array>
using namespace std;
// First Occurrence in Sorted

int main(){

vector<int> arr = {1,4,6,7,8,9,10,23,45,55};

int k = 10;

for(int i = 0 ; i < arr.size() ; i++){
            
if(arr[i] == k){
                
cout << i;

return 0;
                
}

}
        
        cout << -1;
}