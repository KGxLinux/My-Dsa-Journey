#include<iostream>
#include <vector>
#include <array>
using namespace std;
// Move All Negative Elements To End
int main() {
vector<int> arr = {3,-1,6,8,-4,-9,6,0,4,-7,3,6,8,4,-6};
vector<int> arr2(arr.size());
        int n = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            
            if(arr[i] >= 0){
                
                arr2[n] = arr[i];
                n++;
            }
            
        }
        
        for(int i = 0 ; i < arr.size(); i++){
            
            if(arr[i] < 0){
                
                arr2[n] = arr[i];
                
                n++;
            }
        }
        
        for(int i = 0 ; i < arr.size() ; i++){
            
            arr[i] = arr2[i];
            
            cout << arr[i] << " ";
        }
        
        
        
    }
