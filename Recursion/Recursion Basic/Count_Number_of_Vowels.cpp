#include <iostream>

using namespace std;

// Count the number of vowels in a string using recursion

void CountVowels(string str, int index ,int count) {

    if(index == str.length()) {

        cout << "Number of vowels: " << count << endl;
        return;
    }

    
    if(str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u' || str[index] == 'A' || str[index] == 'E' || str[index] == 'I' || str[index] == 'O' || str[index] == 'U') {

        count += 1;
    }
    CountVowels(str, index + 1, count);
}

int main() {

    string str = "I love programming.";

    

    CountVowels(str,0,0);
}