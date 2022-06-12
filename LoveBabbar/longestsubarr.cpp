#include <bits/stdc++.h>
using namespace std;

int longest(int arr[], int n){
    // int star =0;
    // int end = 0; 
    int max_here =1;
    int max_sum = INT_MIN;

    for (int i = 1; i<n; i ++){
        max_here = max_here * arr[i];
        if(max_sum<max_here)
            max_sum = max_here;
        if(max_here < 0){
            max_here = 0;

        }

    }
    return max_sum;

}
int main(){
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxx_sum = longest(arr, n);
    cout << "Maximum contiguous sum is " << maxx_sum;
    return 0;
}