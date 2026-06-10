#include<iostream>
using namespace std;

// Sorting String
int main() {
string Q;
string s = "rahul";

int arr[26] = {0};
        
for(int i = 0; i < s.size(); i++){
            
   arr[s[i]-'a'] += 1;
}
        
for(int i = 0; i < 26 ; i++){
        
 char c = 'a' + i;
        
  while(arr[i]){
    Q +=c;
    arr[i]--;
 }
 
 }
 cout << Q;
 }