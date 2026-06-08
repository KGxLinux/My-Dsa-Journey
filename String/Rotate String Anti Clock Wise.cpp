#include<iostream>
using namespace std;

// Rotate String Anti Clockwise

int main() {
string s1 = "amazon";
string s2 = "azonam";

      string original_s1 = s1;
        if(s1.size() != s2.size()){
            
            return 0;
        }
        for(int i = 0; i < 2;i++){
            
            char c = s1[0];
            int index = 1;
            while(index <= s1.size()-1){
                 s1[index-1] = s1[index];
                 
                 index++;
                
            }
            s1[s1.size()-1] = c;
        }
        
        if(s1==s2){
            
            cout << 1;
        }
        else {
        
        cout << 0;
        
        }
        
        
        }
        
        