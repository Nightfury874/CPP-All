# include <bits/stdc++.h>
using namespace std;

int minlen(int arr[], int x, int n){
    int sum = 0; 
    int len = n+1;
    int start = 0;
    int end = 0;
    while(end<n){
        while(sum<=x && end<n){
            sum += arr[end++]; 
        }
        while(sum>x && start<n){
            if(end-start<len){
                len = end-start;
            }
            sum -= arr[start++];
        }
    }
    cout<<len<< " "<<endl;
    return 0;
}
int main(){
    int arr[] = {1,5,2,8,4,2,3};
    int x = 12;
    int n =  sizeof(arr)/sizeof(arr[0]);
    minlen(arr,x,n);
    return 0;
}