//Move all the negative elements to one side of the array
// Naive approach
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {-1,-2,-4,-5,-2,0,6,5,4,5,2,3,-4,-5,3,-3,-7,-5};
    int n =  sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}