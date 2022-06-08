//Minimise the maximum difference between heights [V.IMP]
#include <bits/stdc++.h>
using namespace std;

int min(int arr[], int n, int k){
    sort(arr, arr+n);
    int ans = arr[n-1] -  arr[0];
    int temp_min = arr[0];
    int temp_max = arr[n-1];
    for (int i =1; i<n; i++){
        if (arr[i]-k<0)
            continue;
            temp_min =  min(arr[0]+k, arr[i]-k);
            temp_max =  max(arr[i-1]+k, arr[n-1]-k);
           int ans = (ans, temp_max-temp_min);        
    }
    return ans;

}
int main (){
    int arr[] = { 7, 4, 8, 8, 8, 9};
    int n =  sizeof(arr)/sizeof(arr[0]);
    int k = 6;
    int ans = min(arr,n,k);
    cout<<ans<<" ";
    return 0;
    //change h
}