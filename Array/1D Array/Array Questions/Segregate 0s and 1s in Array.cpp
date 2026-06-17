#include<iostream>
#include <vector>
#include <array>
using namespace std;

vector <int> arr = {0,1,0,0,1,0,0,1,1,1,0,0,1,1,1,1,0,0,1,0,1,0,1,0,1,0};
// Two Sum II Input Array Is Sorted

int main(){

int count1 = 0;

int count0 = 0;

for(int i = 0 ; i < arr.size() ; i++){
            
if(arr[i] == 1){
                
count1++;
                
}

else{
                
count0++;
            
}
            
}
            
for(int i = 0 ; i < count0 ; i++){
                
arr[i] = 0;

}

for(int i = count0 ; i < arr.size(); i++){
                
arr[i] = 1;

}

for(int i = 0 ; i < arr.size() ; i++) {

cout << arr[i] << " ";
        
}

}