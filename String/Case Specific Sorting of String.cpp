#include<iostream>
using namespace std;

// Case-specific Sorting of Strings
int main() {
string s = "RohanKuMar";
    string ans1;
        string ans2;
        int arr[26] = {0};
        int arr2[26] = {0};
        
        for(int i = 0 ; i < s.size(); i++){
            if(s[i] >= 'a'){
                arr[s[i]-'a'] += 1;
                s[i] = '.';
                
            }
            else {
                arr2[s[i]-'A'] +=1;
                s[i] = '*';
            }
            
            
        }
        
        
        for(int i = 0 ; i < 26 ; i++){
            
                char c = 'a' + i;
                while(arr[i] > 0){
                    
                    ans1 += c;
                    arr[i]--;
                
            }
            
                
                char p = 'A' + i;
                while(arr2[i] > 0){
                    
                    ans2 += p;
                    arr2[i]--;
                
            }
            
            
        }
        int lowIdx = 0, upIdx = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '.') {
                s[i] = ans1[lowIdx++];
            } else {
                s[i] = ans2[upIdx++];
            }
            
        }
        cout << s;
    }
    

        
        
        
        
        
