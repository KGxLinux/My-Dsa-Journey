#include<iostream>
#include <vector>
#include <array>
using namespace std;

vector <int> arr = {1,1,1,0,0,1,0,1,1,0,0,1,0};

// Count the Zeros

int main(){

int count = 0;
        
for(int i = 0 ; i < arr.size() ; i++){
            
if(arr[i] == 0){
                
count++;
                
}
            
}
        
cout << count;

}