#include<iostream>
using namespace std;

// Defanging An IP Address

int main() {

string Q = "256.1.587.90";
string ans;
for(int i = 0; i < Q.size() ; i++) {

if(Q[i] == '.') {

ans = ans + "[.]";

}

else{

ans = ans + Q[i];

}
 
 
 }
 cout<< ans << endl;
 
 
 // While Loop se bhi kar sakte
 
 int index = 0;
 string anss;
 
 while(index < Q.size()) {
 
 if(Q[index] == '.') {
 
 anss = anss + "[.]" ;
 
 }
 
 else {
 
 anss = anss + Q[index];
 
 }
 
index++;
 
 }
  cout << anss;
 
 }
