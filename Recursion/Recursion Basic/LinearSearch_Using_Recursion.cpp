#include <iostream>

using namespace std;

bool LinearSearch (int arr[] , int index , int target){

    if(arr[index] == target){

        return 1;
    }

    if(index == 4){

        return 0;
    }

    return LinearSearch(arr, index + 1, target);
    
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};

  cout <<  LinearSearch(arr,0,4);


}