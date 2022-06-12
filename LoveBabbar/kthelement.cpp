//finding the kth largest element in the array

#include <bits/stdc++.h>
using namespace std;

int main(){
    int k = 3;
    int arr[] = {1,4,6,9,0,40};
    int n =  sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    
    
    cout << arr[k]<<" "<<endl;
    return 0;

}