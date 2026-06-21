#include<iostream>
#include <vector>
#include <array>
using namespace std;

int main() {

string sortSentence(string s) {
        string word;
    vector<string> result(10); 
    int wordCount = 0;

        stringstream ss(s);
    while (ss >> word) {
        int pos = word.back() - '0'; 
        word.pop_back(); 
        result[pos] = word;
        wordCount++;
    }

    string final_res = "";
    for (int i = 1; i <= wordCount; i++) {
        final_res += result[i];
        if (i < wordCount) {
            final_res += " "; 
        }
    }
    
    return final_res;
    }
    
 }   