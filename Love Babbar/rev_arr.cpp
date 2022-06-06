#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int reversearr(int start, int end, int arr[]){  // Function to make a temporary variable to reverse the array
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;\
        start ++;
        end --;

    }
}

int printarr(int arr[], int n){  // array print function

    for (int i = 0; i<n ; i++){
        cout << arr[i]<<" ";
        cout<<endl;
    }
}

int main() {
    int arr[] = {0,1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printarr(arr, n);
    reversearr(0,n-1,arr);
    printarr(arr,n);
    return 0;

    
}