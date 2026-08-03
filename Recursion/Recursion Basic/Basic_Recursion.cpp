#include <iostream>
using namespace std;



void fun(int n){

    if(n == 0){
        cout << "Happy Birthday" << endl;
        return;
    }
    
    cout << n << " Happy Birthday"<< endl;

    fun(n-1);
}

int main(){


    int n = 3;

//     for(int i = n ; i >= 1 ; i--){

//         cout << i << " Happy Birthday"<< endl;
//     }

//     cout << "Happy Birthday";
// }

fun(8);

}





