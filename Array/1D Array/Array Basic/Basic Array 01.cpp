#include <iostream>
using namespace std;

int main () {

int arr[5] = {2,4,3,1,5};

for(int i = 0 ; i <5 ; i++) {

cout<<arr[i] << " ";

}
cout<<endl;

int ar[] = {2,4,3,1,5};

for(int i = 0 ; i <5 ; i++) {

cout<<ar[i] << " ";


}
cout << endl;
int arrr[5] = {2,4,3};

for(int i = 0 ; i <5 ; i++) {

cout<<arrr[i] << " ";

}
cout<<endl;

int size;
cin>>size;

int aarrr[1000];

for(int i=0;i<size; i++) {

cin>>aarrr[i];
}
for(int i=0;i<size; i++) {

cout<<aarrr[i]<<" ";
}

cout << endl;
int argr[5] = {2,3,1,7,8};


cout<<sizeof(argr)/sizeof( argr[0])<<endl;


return 0;


}
    