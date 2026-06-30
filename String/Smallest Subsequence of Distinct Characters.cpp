#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

// Smallest Subsequence of Distinct Characters

using namespace std;

string smallestSubsequence(string s) {
    unordered_map<char, int> last;
    for (int i = 0; i < s.length(); i++) {
        last[s[i]] = i;
    }
    
    vector<char> st;
    unordered_set<char> vis;
    
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (vis.count(c)) continue;
        
        while (!st.empty() && st.back() > c && last[st.back()] > i) {
            vis.erase(st.back());
            st.pop_back();
        }
        st.push_back(c);
        vis.insert(c);
    }
    
    return string(st.begin(), st.end());
}
