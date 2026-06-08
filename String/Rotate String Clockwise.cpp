#include<iostream>
using namespace std;

// Rotate String Clockwise

int main() {
string s1 = "amazon";
string s2 = "onamaz";

 for(int i = 0; i< 2 ; i++){
 
 char c = s1[s1.size()-1];
            
  int index = s1.size()-2;
            
   while (index >= 0){
                
   s1[index+1] = s1[index];
                
   index--;
   }
   s1[0] = c;
   }
        
   if(s1 == s2){
            
   cout << 1;
   }
   
   else{
         cout << 0;
         }
        
    }