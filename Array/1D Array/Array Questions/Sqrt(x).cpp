#include<iostream>
#include <vector>
#include <array>
using namespace std;

// Sqrt(x)

int x = 90;

int main() {

 int start = 0;
 int end = x;
 int mid;
 int ans;
 
if(x < 2){

cout << x;

return 0;

}

while(start <= end){

mid = (start+end)/2;
            
if(mid == x/mid){

cout << mid;

return 0;

}
            
else if(mid < x/mid){

ans = mid;

start = mid+1;

}

else{
               
end = mid-1;

}

}

cout << ans;
return 0;

}