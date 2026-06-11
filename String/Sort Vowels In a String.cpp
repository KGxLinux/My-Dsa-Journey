#include<iostream>
using namespace std;

// Sort Vowels In A String
int main() {
string s = "lEetcOde"; // output = lEOtcede

string ans;
        int arr[26] = {0};
        int arr2[26] = {0}; 
        for(int i = 0; i < s.size() ; i++){
            if(s[i] == 'a' || s[i] == 'e'|| s[i] == 'i' || s[i] == 'o'|| s[i] == 'u'){
           arr2[s[i]-'a']  += 1;
                s[i] = '#';
            }
            else if (s[i] == 'A'|| s[i] == 'E' || s[i] == 'I'|| s[i] == 'O'|| s[i] == 'U'){
                arr[s[i]-'A'] += 1;
                s[i] = '#';
            }
        }
        for(int i = 0 ; i < 26 ; i++){
        char c = 'A' + i;
        while(arr[i]){
            ans += c;
            
            arr[i]--;
        }
        }
for(int i = 0; i < 26 ; i++){
    char c = 'a' + i;
    while(arr2[i]){
            ans += c;
        
        arr2[i]--;
            }
        
    }
        int second = 0;
        int M = 0;
       while(second < ans.size()){
            if(s[M] == '#'){
               s[M] = ans[second];
               second++;
               }
            M++;
       }
           
    
           
       
        cout << s;
    }