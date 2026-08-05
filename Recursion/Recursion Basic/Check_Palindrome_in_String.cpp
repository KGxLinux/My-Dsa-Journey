#include <iostream>

using namespace std;

    // Check if a string is palindrome or not using recursion

bool CheckString(string str, int start, int end) {

    if(start>=end) {

        return 1;
    }

    if(str[start] != str[end]) {
        return 0;
    }

    return CheckString(str, start + 1, end - 1);
}


int main() {

    string str = "hello";

    cout << CheckString(str,0,str.length()-1);

}